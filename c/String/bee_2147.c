#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d", &a);
    getchar();
    while (a--)
    {

        char arr[10002];
        fgets(arr, sizeof(arr), stdin);
        arr[strcspn(arr, "\n")] = '\0';

        int u = 0;
        u = strlen(arr);
        float l = u * (1 / 100.0);
        printf("%.2f\n",l);
    }

    return 0;
}



