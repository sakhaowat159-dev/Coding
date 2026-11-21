#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x--)

    {

        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int max = a + c;
        if (a + d > max)
        {
            max = a + d;
        }

        if (b + c > max)
        {
            max = b + c;
        }
        if (b + d > max)
        {
            max = b + d;
        }

        printf("%d\n", max);
    }

    return 0;
}