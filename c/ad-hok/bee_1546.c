#include <stdio.h>
int main()
{

    int a, b, u;
    scanf("%d", &a);
    while (a)
    {
        scanf("%d", &b);
        for (int i = 1; i <= b; i++)
        {
            scanf("%d", &u);

            if (u == 1)
            {
                printf("Rolien\n");
            }
            else if (u == 2)
            {
                printf("Naej\n");
            }
            else if (u == 3)
            {
                printf("Elehcim\n");
            }
            else if (u == 4)
            {
                printf("Odranoel\n");
            }
        }

        a--;
    }

    return 0;
}