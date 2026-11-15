#include <stdio.h>
#include<string.h>

int main()
{

    int a;
    scanf("%d", &a);
    getchar();
    while (a--)
    {

        char arr[1000];
        fgets(arr, sizeof(arr), stdin);

        arr[strcspn(arr, "\n")] = '\0';

        printf("gzuz\n");
    }

    return 0;
}