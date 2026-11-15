#include <stdio.h>
#include <string.h>

int main()
{

    int a;
    scanf("%d", &a);
    getchar();
    while (a--)
    {
        char arr[1000];
       // fgets(arr, sizeof(arr), stdin);
        if (fgets(arr, sizeof(arr), stdin) == NULL)
            break;
        arr[strcspn(arr, "\n")] = '\0';

        int y = 0;
        y = strlen(arr);

        for (int i = y - 1; i >= 0; i--)
        {

            if (arr[i] >= 'a' && arr[i] <= 'z')
            {
                printf("%c", arr[i]);
            }
        }
        printf("\n");
    }

    return 0;
}