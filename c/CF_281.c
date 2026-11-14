#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{

    char arr[100];
    fgets(arr, sizeof(arr), stdin);
    arr[strcspn(arr, "\n")] = '\0';
    arr[0] = toupper((unsigned char)arr[0]);
    printf("%s\n", arr);

    return 0;
}