#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int x;
    scanf("%d", &x);
    while (x)
    {
        char arr[10000];
       scanf("%100s", arr);
        //arr[strcspn(arr, "\n")] = '\0';

        int y = strlen(arr);
        if (y > 10)
        {
            printf("%c%d%c\n", arr[0], y - 2, arr[y - 1]);
        }
        else
            printf("%s\n", arr);

        x--;
    }
    return 0;
}