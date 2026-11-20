#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    while (a != 0 || b != 0)
    {

        int res = a % 10;
        int sol = b % 10;
        if (res + sol >= 10)
        {
            printf("Yes\n");
            return 0;
        }

        a = a / 10;
        b = b / 10;
        if (a == 0 || b == 0)
        {
            printf("No\n");
            return 0;
        }
    }

    return 0;
}