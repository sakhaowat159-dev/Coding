#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b, res = 0;
        scanf("%d %d", &a, &b);
        res = a * b;
        if (res < 100)
        {
            printf("0\n");
        }

        else if (res >= 100)
        {
            int t = res / 100;
            printf("%d\n", t);
        }
    }

    return 0;
}