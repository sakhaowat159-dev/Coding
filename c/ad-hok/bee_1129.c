#include <stdio.h>
int main()
{
    while (1)
    {

        int a;
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        int t[5];
        for (int i = 1; i <= a; i++)
        {

            for (int k = 0; k < 5; k++)
            {

                scanf("%d", &t[k]);
            }
            int count = 0;
            int y = 0;
            for (int j = 0; j < 5; j++)
            {

                if (t[j] <= 127)
                {

                    count++;
                    y = j;
                }
            }
            if (count == 1)
            {
                if (y == 0)
                {
                    printf("A\n");
                }
                if (y == 1)
                {
                    printf("B\n");
                }
                if (y == 2)
                {
                    printf("C\n");
                }
                if (y == 3)
                {
                    printf("D\n");
                }
                if (y == 4)
                {
                    printf("E\n");
                }
            }
            else
            {
                printf("*\n");
            }
        }
    }

    return 0;
}