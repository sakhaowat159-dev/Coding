#include <stdio.h>
int main()
{

    int a, b;
    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            break;
        }
        int h = 0, j = 0;

        if (a > b)
        {
            h = 1;
        }

        else
        {
            j = 1;
        }
        if (h == 1)
        {
            printf("Decrescente\n");
        }
        else if (j == 1)
        {
            printf("Crescente\n");
        }
    }
    return 0;
}