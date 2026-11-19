#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char arr[2001];
    char str[2001];
    scanf("%[^\n]", arr);
    int len = strlen(arr) - 1;
    int j = 0;
    for (int i = len; i >= 0; i--)
    {

        str[j++] = arr[i];
        if ((len - i + 1) % 3 == 0 && i != 0)
        {
            str[j++] = ',';
        }
    }
    str[j] = '\0';
    for (int k = 0; k < j / 2; k++)
{
    char temp = str[k];
    str[k] = str[j - 1 - k];
    str[j - 1 - k] = temp;
}
    printf("%s", str);

    return 0;
}