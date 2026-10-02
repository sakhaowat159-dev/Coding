#include <stdio.h>
int main()
{

    while (1)
    {
        int a = 0;
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        for (int i = 1; i <= a; i++)
        {
            printf("%d", i);
            if(i != a)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}