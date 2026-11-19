#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define START_SIZE 10  
#define MAX_TRANS 50
#define FILE_NAME "accounts.dat"


struct Transaction {
    char type;
    float amount;
};


struct Account {
    int accNo;
    char name[50];
    float balance;
    int transCount;
    struct Transaction history[MAX_TRANS];
};


struct Account *accounts = NULL;
int total = 0;          
int capacity = 0;      


int growArray() {
    int newCap = (capacity == 0) ? START_SIZE : capacity * 2;
    struct Account *temp = realloc(accounts, newCap * sizeof(struct Account));
    if (temp == NULL) {
        printf("Error: not enough memory!\n");
        return 0;
    }
    accounts = temp;
    capacity = newCap;
    return 1;
}

/* ---------- input helper functions ---------- */

int readInt() {
    char line[100];
    int num;
    while (1) {
        fgets(line, sizeof(line), stdin);
        if (sscanf(line, "%d", &num) == 1)
            return num;
        printf("Invalid input! Enter a number: ");
    }
}

float readAmount() {
    char line[100];
    float amt;
    while (1) {
        fgets(line, sizeof(line), stdin);
        if (sscanf(line, "%f", &amt) == 1 && amt > 0)
            return amt;
        printf("Invalid amount! Enter a positive number: ");
    }
}

void readString(char str[], int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';   
}


int findByNumber(int accNo) {
    int i;
    for (i = 0; i < total; i++) {
        if (accounts[i].accNo == accNo)
            return i;
    }
    return -1;
}

/* ---------- main functions ---------- */

void addAccount() {
    struct Account a;

    printf("Enter account number: ");
    a.accNo = readInt();
   
    if (findByNumber(a.accNo) != -1) {
        printf("This account number already exists!\n");
        return;
    }

    printf("Enter customer name: ");
    readString(a.name, sizeof(a.name));
    if (strlen(a.name) == 0) {
        printf("Name cannot be empty!\n");
        return;
    }

    printf("Enter initial balance: ");
    a.balance = readAmount();
    a.transCount = 0;

    if (total == capacity) {
        if (!growArray())
            return;
    }

    accounts[total] = a;
    total++;
    printf("Account added successfully!\n");
}

void printAccount(struct Account a) {
    int i;
    printf("\nAccount No : %d\n", a.accNo);
    printf("Name       : %s\n", a.name);
    printf("Balance    : %.2f\n", a.balance);
    printf("Transactions:\n");
    if (a.transCount == 0) {
        printf("  No transactions yet.\n");
    }
    for (i = 0; i < a.transCount; i++) {
        if (a.history[i].type == 'D')
            printf("  %d. Deposit  %.2f\n", i + 1, a.history[i].amount);
        else
            printf("  %d. Withdraw %.2f\n", i + 1, a.history[i].amount);
    }
}

void displayAll() {
    int i;
    if (total == 0) {
        printf("No accounts found.\n");
        return;
    }
    for (i = 0; i < total; i++) {
        printAccount(accounts[i]);
        printf("--------------------------\n");
    }
}

void searchAccount() {
    int choice, i, accNo, found = 0;
    char name[50];

    printf("1. Search by account number\n");
    printf("2. Search by name\n");
    printf("Enter choice: ");
    choice = readInt();

    if (choice == 1) {
        printf("Enter account number: ");
        accNo = readInt();
        i = findByNumber(accNo);
        if (i == -1)
            printf("Account not found!\n");
        else
            printAccount(accounts[i]);
    } else if (choice == 2) {
        printf("Enter name: ");
        readString(name, sizeof(name));
        for (i = 0; i < total; i++) {
            if (strcmp(accounts[i].name, name) == 0) {
                printAccount(accounts[i]);
                found = 1;
            }
        }
        if (!found)
            printf("Account not found!\n");
    } else {
        printf("Invalid choice!\n");
    }
}

void addTransaction(int index, char type, float amount) {
    struct Account *a = &accounts[index];
    int i;

  
    if (a->transCount == MAX_TRANS) {
        for (i = 1; i < MAX_TRANS; i++)
            a->history[i - 1] = a->history[i];
        a->transCount--;
    }
    a->history[a->transCount].type = type;
    a->history[a->transCount].amount = amount;
    a->transCount++;
}

void depositWithdraw() {
    int accNo, index, choice;
    float amount;

    printf("Enter account number: ");
    accNo = readInt();
    index = findByNumber(accNo);
    if (index == -1) {
        printf("Account not found!\n");
        return;
    }

    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("Enter choice: ");
    choice = readInt();

    if (choice != 1 && choice != 2) {
        printf("Invalid choice!\n");
        return;
    }

    printf("Enter amount: ");
    amount = readAmount();

    if (choice == 1) {
        accounts[index].balance += amount;
        addTransaction(index, 'D', amount);
        printf("Deposit successful! New balance: %.2f\n", accounts[index].balance);
    } else {
        if (amount > accounts[index].balance) {
            printf("Insufficient balance!\n");
            return;
        }
        accounts[index].balance -= amount;
        addTransaction(index, 'W', amount);
        printf("Withdraw successful! New balance: %.2f\n", accounts[index].balance);
    }
}

void removeAt(int index) {
    int i;
    for (i = index; i < total - 1; i++)
        accounts[i] = accounts[i + 1];
    total--;
}

void deleteAccount() {
    int choice, i, accNo, index, matches = 0;
    char name[50], confirm[10];

    printf("1. Delete by account number\n");
    printf("2. Delete by name\n");
    printf("Enter choice: ");
    choice = readInt();

    if (choice == 1) {
        printf("Enter account number: ");
        accNo = readInt();
        index = findByNumber(accNo);
        if (index == -1) {
            printf("Account not found!\n");
            return;
        }
    } else if (choice == 2) {
        printf("Enter name: ");
        readString(name, sizeof(name));
        index = -1;
        for (i = 0; i < total; i++) {
            if (strcmp(accounts[i].name, name) == 0) {
                index = i;
                matches++;
            }
        }
        if (matches == 0) {
            printf("Account not found!\n");
            return;
        }
        if (matches > 1) {
            printf("%d accounts have this name. Please delete by account number.\n", matches);
            return;
        }
    } else {
        printf("Invalid choice!\n");
        return;
    }

    /* ask before deleting */
    printAccount(accounts[index]);
    printf("\nAre you sure you want to delete this account? (y/n): ");
    readString(confirm, sizeof(confirm));
    if (confirm[0] == 'y' || confirm[0] == 'Y') {
        removeAt(index);
        printf("Account deleted successfully!\n");
    } else {
        printf("Delete cancelled.\n");
    }
}

void saveToFile() {
    FILE *fp = fopen(FILE_NAME, "wb");
    if (fp == NULL) {
        printf("Error: could not open file for saving!\n");
        return;
    }
    fwrite(&total, sizeof(int), 1, fp);
    fwrite(accounts, sizeof(struct Account), total, fp);
    fclose(fp);
    printf("Records saved to file.\n");
}

void loadFromFile() {
    int count;
    FILE *fp = fopen(FILE_NAME, "rb");
    if (fp == NULL) {
        printf("No saved file found. Starting fresh.\n");
        return;
    }
    if (fread(&count, sizeof(int), 1, fp) != 1 || count < 0) {
        printf("Error: file is corrupted!\n");
        fclose(fp);
        return;
    }

    
    while (capacity < count) {
        if (!growArray()) {
            fclose(fp);
            return;
        }
    }
    total = fread(accounts, sizeof(struct Account), count, fp);
    fclose(fp);
    printf("%d account loaded from file.\n", total);
}

void showMenu() {
    printf("\n===== BANK MANAGEMENT SYSTEM =====\n");
    printf("1. Add new account\n");
    printf("2. Display all accounts\n");
    printf("3. Search account\n");
    printf("4. Deposit / Withdraw\n");
    printf("5. Delete account\n");
    printf("6. Save records to file\n");
    printf("7. Load records from file\n");
    printf("8. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;

    loadFromFile();   
    while (1) {
        showMenu();
        choice = readInt();

        switch (choice) {
            case 1: addAccount(); break;
            case 2: displayAll(); break;
            case 3: searchAccount(); break;
            case 4: depositWithdraw(); break;
            case 5: deleteAccount(); break;
            case 6: saveToFile(); break;
            case 7: loadFromFile(); break;
            case 8:
                saveToFile();
                free(accounts);   
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}