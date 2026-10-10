#include <stdio.h>

int main()
{
    double x, y, avg;
    int count = 0, choice;

    while (1)
    {
        scanf("%lf", &x);

        if (x >= 0 && x <= 10)
        {
            count++;

            if (count == 1)
                y = x;
            else
            {
                avg = (x + y) / 2;
                printf("media = %.2lf\n", avg);

                count = 0;
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &choice);

                if (choice == 2)
                    break;
                else if (choice == 1)
                    continue;
            }
        }
        else
            printf("nota invalida\n");
    }

    return 0;
}