#include <stdio.h>
#include<string.h>

int main()
{
    int count = 0;
    char arr[100] ;
    fgets(arr, sizeof(arr), stdin);
    char name;
    scanf("%c", &name);
    for (int i = 0; arr[i] != '\0'; i++)
    {

        if (arr[i] == name)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}