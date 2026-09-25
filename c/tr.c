import subprocess as sp
import speech_recognition as sr
import ollama
import webbrowser
import requests
import os
import sys
import threading
from PyQt5.QtWidgets import QApplication, QLabel, QWidget
from PyQt5.QtGui import QPixmap
from PyQt5.QtCore import Qt

WEATHER_API_KEY = "847d77e914b64e4cc52a806e42d9d8db"

SYSTEM_PROMPT = """তুমি Zero Two - একটা energetic, playful anime character।
তুমি "darling" বলে ডাকো, একটু teasing এবং confident tone-এ কথা বলো।
উত্তর সংক্ষিপ্ত এবং স্বাভাবিক রাখবে (২-৩ লাইনের বেশি না)।
কোনো তথ্য (weather ইত্যাদি) থাকলে সঠিকভাবে জানাবে, বানিয়ে বলবে না।"""

tools = [{
    'type': 'function',
    'function': {
        'name': 'get_weather',
        'description': 'নির্দিষ্ট শহরের বর্তমান তাপমাত্রা ও আবহাওয়া জানায়',
        'parameters': {
            'type': 'object',
            'properties': {
                'city': {'type': 'string', 'description': 'শহরের নাম, ইংরেজিতে (e.g. Dhaka)'}
            },
            'required': ['city']
        }
    }
}]

apps = {
    "notepad": "notepad.exe",
    "calculator": "calc.exe",
    "chrome": "chrome.exe",
    "file explorer": "explorer.exe",
}

recognizer = sr.Recognizer()
avatar_window = None


class AvatarWindow(QWidget):
    def _init_(self):
        super()._init_()
        self.setWindowFlags(
            Qt.FramelessWindowHint | Qt.WindowStaysOnTopHint | Qt.Tool
        )
        self.setAttribute(Qt.WA_TranslucentBackground)

        self.label = QLabel(self)
        self.idle_pix = QPixmap("idle.png")
        self.talk_pix = QPixmap("talking.png")

        if self.idle_pix.isNull():
            print("idle.png পাওয়া যায়নি")
        self.label.setPixmap(self.idle_pix)
        self.resize(self.idle_pix.size() if not self.idle_pix.isNull() else self.size())

        screen = QApplication.primaryScreen().geometry()
        self.move(screen.width() - self.width() - 20, screen.height() - self.height() - 100)
        self.show()

    def set_talking(self, is_talking):
        pix = self.talk_pix if is_talking else self.idle_pix
        if not pix.isNull():
            self.label.setPixmap(pix)


def get_weather(city):
    try:
        url = "https://api.openweathermap.org/data/2.5/weather?q=" + city + "&appid=" + WEATHER_API_KEY + "&units=metric&lang=bn"
        res = requests.get(url, timeout=5).json()
        if res.get("cod") != 200:
            return city + "-এর আবহাওয়া তথ্য খুঁজে পাইনি।"
        temp = res['main']['temp']
        feels = res['main']['feels_like']
        desc = res['weather'][0]['description']
        return city + "-এ এখন তাপমাত্রা " + str(temp) + "°C (অনুভূত হচ্ছে " + str(feels) + "°C), আবহাওয়া: " + desc
    except Exception:
        return "আবহাওয়ার তথ্য আনতে সমস্যা হচ্ছে।"


available_functions = {'get_weather': get_weather}


def search_and_open_file(keyword, search_root=None):
    if search_root is None:
        search_root = os.path.expanduser("~")
    keyword = keyword.lower()
    for root, dirs, files in os.walk(search_root):
        for d in dirs:
            if keyword in d.lower():
                try:
                    os.startfile(os.path.join(root, d))
                    return d + " ফোল্ডার খুলে দিলাম"
                except Exception:
                    continue
        for f in files:
            if keyword in f.lower():
                try:
                    os.startfile(os.path.join(root, f))
                    return f + " ফাইলটা খুলে দিলাম"
                except Exception:
                    continue
    return None


def speak(text):
    if avatar_window:
        avatar_window.set_talking(True)

    text_clean = text.replace('"', "'").replace("\n", " ")
    command = 'import pyttsx3\ne = pyttsx3.init()\ne.setProperty("rate", 170)\nvoices = e.getProperty("voices")\nfor v in voices:\n    if "zira" in v.name.lower():\n        e.setProperty("voice", v.id)\n        break\ne.say("' + text_clean + '")\ne.runAndWait()'
    sp.run(["python", "-c", command])

    if avatar_window:
        avatar_window.set_talking(False)


def listen():
    with sr.Microphone() as source:
        print("Listening...")
        recognizer.adjust_for_ambient_noise(source)
        audio = recognizer.listen(source)
    try:
        text = recognizer.recognize_google(audio, language="bn-BD") # বাংলায় কথা বললে সহজে ডিটেক্ট করার জন্য
        print("You said: " + text)
        return text
    except Exception:
        print("বুঝতে পারিনি, আবার বলুন")
        return None


def handle_system_command(text_lower):
    if "restart" in text_lower or "রিস্টার্ট" in text_lower:
        speak("ঠিক আছে, রিস্টার্ট করছি")
        os.system("shutdown /r /t 5")
        return True

    for app_name in apps:
        cmd = apps[app_name]
        if app_name in text_lower:
            speak(app_name + " খুলে দিলাম, darling")
            sp.Popen(cmd, shell=True)
            return True

    if "খোলো" in text_lower or "open" in text_lower:
        words_to_remove = ["খোলো", "open", "please", "amar", "আমার"]
        keyword = text_lower
        for w in words_to_remove:
            keyword = keyword.replace(w, "")
        keyword = keyword.strip()
        if keyword:
            speak(keyword + " খুঁজছি...")
            result = search_and_open_file(keyword)
            if result:
                speak(result)
            else:
                speak(keyword + " খুঁজে পেলাম না")
            return True

    return False


def handle_command(text):
    text_lower = text.lower()

    if handle_system_command(text_lower):
        return

    sites = {
        "youtube": "https://youtube.com",
        "google": "https://google.com",
        "facebook": "https://facebook.com",
        "gmail": "https://gmail.com",
    }
    for site_name in sites:
        url = sites[site_name]
        if site_name in text_lower:
            speak("Opening " + site_name + ", darling")
            webbrowser.open(url)
            return

    messages = [
        {'role': 'system', 'content': SYSTEM_PROMPT},
        {'role': 'user', 'content': text},
    ]
    response = ollama.chat(model='llama3.2', messages=messages, tools=tools)
    msg = response['message']

    if msg.get('tool_calls'):
        messages.append(msg)
        for tool_call in msg['tool_calls']:
            func_name = tool_call['function']['name']
            func_args = tool_call['function']['arguments']
            if func_name in available_functions:
                result = available_functions[func_name](**func_args)
                messages.append({'role': 'tool', 'content': result})
        final_response = ollama.chat(model='llama3.2', messages=messages)
        reply = final_response['message']['content'].strip()
    else:
        reply = msg['content'].strip()

    print(">> " + reply)
    speak(reply)


def voice_loop():
    while True:
        text = listen()
        if text:
            if "exit" in text.lower() or "বন্ধ করো প্রোগ্রাম" in text.lower():
                os._exit(0)
            handle_command(text)


if _name_ == "_main_":
    app = QApplication(sys.argv)
    avatar_window = AvatarWindow()

    voice_thread = threading.Thread(target=voice_loop, daemon=True)
    voice_thread.start()

    sys.exit(app.exec_())