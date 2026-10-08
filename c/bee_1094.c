#include <stdio.h>

int main()
{
    int n, b;
    int coelho = 0, rato = 0, sapo = 0;
    char tipo;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %c", &b, &tipo);

        if (tipo == 'C')
        {
            coelho += b;
        }

        if (tipo == 'R')
        {
            rato += b;
        }

        if (tipo == 'S')
        {
            sapo += b;
        }
    }

    int total = coelho + rato + sapo;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);

    printf("Percentual de coelhos: %.2f %%\n",
           (float)coelho / total * 100);

    printf("Percentual de ratos: %.2f %%\n",
           (float)rato / total * 100);

    printf("Percentual de sapos: %.2f %%\n",
           (float)sapo / total * 100);

    return 0;
}