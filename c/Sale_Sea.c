#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a;
        scanf("%d", &a);
        if (a <= 100)
        {
            printf("%d\n", a);
        }

        else if (a > 100 && a <= 1000)
        {
            printf("%d\n", (a - 25));
        }

        else if (a > 1000 && a <= 5000)
        {
            printf("%d\n", (a - 100));
        }

        else if (a > 5000)
        {
            printf("%d\n", (a - 500));
        }
    }

    return 0;
}