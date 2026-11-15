#include <stdio.h>
#include <string.h>

int main()
{
    int t = 0;

    char arr[1000], str[1000];

    fgets(arr, sizeof(arr), stdin);

    arr[strcspn(arr, "\n")] = '\0';

    for (int i = 0; arr[i] != '\0'; i++)

    {
        if (arr[i] == ',')
        {
            t = i;
            break;
        }
    }

    for (int i = 0; i < t; i++)

    {

        printf("%c", arr[i]);
    }
    printf("\n");

    for (int i = t+1; arr[i] != '\0'; i++)
    {

        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;
}