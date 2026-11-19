#include <stdio.h>
#include <string.h>
int main()
{

    char arr[1000];
    scanf("%[^\n]", arr);
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 'X')
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}