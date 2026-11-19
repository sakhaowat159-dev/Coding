#include <stdio.h>
#include <string.h>

int main()
{

    char arr[1000];
    char str[1000];
    scanf("%[^\n]", arr);
    int len = 0;
    len = strlen(arr);
    int j = 0;
    for (int i = len - 1; i >= 0; i--, j++)
    {

        str[j] = arr[i];
    }
    str[j] = '\0';
    if (strcmp(arr, str) == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
