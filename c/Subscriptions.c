
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b, res = 0;
        scanf("%d %d", &a, &b);

        if (a <= 6)
        {
            printf("%d\n", b);
        }
        else if (a > 6 && a % 6 == 0)

        {
            res = a / 6;
            printf("%d\n", res * b);
        }
        else if (a % 6 != 0)
        {
            res = (a / 6) + 1;
            printf("%d\n", b * res);
        }
    }

    return 0;
}