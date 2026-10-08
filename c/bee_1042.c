#include <stdio.h>

int main()
{
    int a, b, c;
    int max, min, mid;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    if (a <= b && a <= c)
        min = a;
    else if (b <= a && b <= c)
        min = b;
    else
        min = c;

    mid = a + b + c - max - min;

    printf("%d\n", min);
    printf("%d\n", mid);
    printf("%d\n", max);

    printf("\n");

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}