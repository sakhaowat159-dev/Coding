#include <stdio.h>

int main()
{

    int a, e;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &e);

        if (e < 0 && e % 2 == 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (e == 0)
        {
            printf("NULL\n");
        }
        else if (e < 0 && e % 2 != 0)

        {
            printf("ODD NEGATIVE\n");
        }

        else if (e > 0 && e % 2 != 0)

        {
            printf("ODD POSITIVE\n");
        }

        else if (e > 0 && e % 2 == 0)

        {
            printf("EVEN POSITIVE\n");
        }
    }
    return 0;
}