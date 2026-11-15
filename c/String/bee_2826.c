#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{

    char arr[50], str[50];
    scanf("%99s %99s", arr, str);

    if (strcmp(arr, str) < 0)
    {
        printf("%s\n%s\n", arr, str);
    }

    else if (strcmp(arr, str) > 0)
    {
        printf("%s\n%s\n", str, arr);
    }

    else
        printf("%s\n%s\n", arr, str);

    return 0;
}