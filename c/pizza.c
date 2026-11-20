#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b, res = 0;
        ;
        scanf("%d %d", &a, &b);

        res = a * b;
        if (res % 4 == 0)
        {
            printf("%d\n", res / 4);
        }
        else
            printf("%d\n", (res / 4) + 1);
    }

    return 0;
}