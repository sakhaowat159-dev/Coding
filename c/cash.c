#include <stdio.h>

void cash(int x, int y)
{

    for (int i = 1; i <= x; i++)
    {
        printf("%d", y);
        printf(" ");
    }
}

int main()
{

    int a;
    scanf("%d", &a);

    int res = 0, sum = 0, count = 0, point = 0, hess = 0, huss = 0;

    res = a / 500;
    a = a % 500;
    sum = a / 100;
    a = a % 100;
    count = a / 50;
    a = a % 50;
    point = a / 10;
    a = a % 10;
    hess = a / 5;
    a = a % 5;
    huss = a / 1;

    cash(huss, 1);
    cash(hess, 5);
    cash(point, 10);
    cash(count, 50);
    cash(sum, 100);
    cash(res, 500);

    return 0;
}