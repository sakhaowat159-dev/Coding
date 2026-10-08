#include <stdio.h>

int main()
{

    float a, b;
    scanf("%f ", &a);

    if (a <= 400.00)
    {
        b = .15;
    }

    else if (a <= 800.00)
    {
        b = 0.12;
    }

    else if (a <= 1200.00)
    {
        b = 0.10;
    }

    else if (a <= 2000.00)
    {
        b = 0.07;
    }

    else
    {
        b = 0.04;
    }

    printf("Novo salario: %.2f\n", (a + (a * b)));
    printf("Reajuste ganho: %.2f\n", (a * b));

    printf("Em percentual: %.0f %%\n",( b * 100));

    return 0;
}