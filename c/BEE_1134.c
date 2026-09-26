#include <stdio.h>
int main()
{
    int a, sum = 0, count = 0, plus = 0, t=1;

    while (t)

    {

        scanf("%d", &a);

        if (a == 1)
        {
            sum += 1;
        }
        else if (a == 2)
        {
            count += 1;
        }
        else if (a == 3)
        {
            plus += 1;
        }

        else if (a == 4)

            t = 0;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", sum);
    printf("Gasolina: %d\n", count);
    printf("Diesel: %d\n", plus);

    return 0;
}