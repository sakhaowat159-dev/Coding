#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int j = 1;

    char arr[100], str[1000];
    scanf("%[^\n]", arr);
    str[0] = toupper(arr[0]);
    for (int i = 1; arr[i] != '\0'; i++)
    {

        if (arr[i] == 's')
        {
            str[j++] = '$';
        }
        else if (arr[i] == 'i')

        {
            str[j++] = '!';
        }

        else if (arr[i] == 'o')

        {
            str[j++] = '(';
            str[j++] = ')';
        }
        else
            str[j++] = arr[i];
    }
    str[j] = '\0';
    printf("%s", str);
    printf(".");

    return 0;
}