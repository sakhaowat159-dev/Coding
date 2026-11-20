#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b;
        scanf("%d %d", &a, &b);

        int res = 0;
        res = (a * 4) + b;
        printf("%d\n", res);
    }

    return 0;
}