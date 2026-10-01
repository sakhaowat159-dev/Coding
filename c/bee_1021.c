#include <stdio.h>
int main()
{
float a ;
    int h, b, c, d, e, f, g, p, y, z, i, j, k,x;
    scanf("%f", &a);
    b = ((int)a);

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", b / 100);

    c = b % 100;
    printf("%d nota(s) de R$ 50.00\n", c / 50);

    d = c % 50;
    printf("%d nota(s) de R$ 20.00\n", d / 20);

    e = d % 20;
    printf("%d nota(s) de R$ 10.00\n", e / 10);

    f = e % 10;
    printf("%d nota(s) de R$ 5.00\n", f / 5);

    g = f % 5;
    printf("%d nota(s) de R$ 2.00\n", g / 2);

    h = g % 2;

    printf("MOEDAS:\n");

    x = ((((a - (int)b) + h) * 100)+0.5);

    printf("%d moeda(s) de R$ 1.00\n", x / 100);

    y = x % 100;
    printf("%d moeda(s) de R$ 0.50\n",y / 50);

    z = y % 50;
    printf("%d moeda(s) de R$ 0.25\n", z / 25);

    i = z % 25;
    printf("%d moeda(s) de R$ 0.10\n", i / 10);

    j = i % 10;
    printf("%d moeda(s) de R$ 0.05\n", j / 5);

    k = j % 5;
    printf("%d moeda(s) de R$ 0.01\n", k /1);

return 0;
}