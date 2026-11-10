#include <stdio.h>
int main()
{

    int a, count = 0, point = 0, sum = 0;
    scanf("%d", &a);
    if (a == 1)
    {
        Printf("Nada\n");
    }
    else
        for (int i = 1; i <= a; i++)

        {
            if (a % i == 0)
            {
                count++;
            }
        }
    if (count > 2)
    {
        Printf("Nada\n");
        break;
    }
    else
        while (a)
        {
            int a = a % 10;

            for (int i = 1; i <= a; i++)

            {
                if (a % i == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                point = 1; // prime
            }
            int a = a / 10;

            for (int i = 1; i <= a; i++)

            {
                if (a % i == 0)
                {
                    count++;
                }
            }
            if (count == 2 && point == 1 )
            {
                printf("Primo\n");
            }
        }

    return 0;
}