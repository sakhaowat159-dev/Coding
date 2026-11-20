#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b, t, y;
        scanf("%d %d %d %d", &a, &b, &t, &y);

        int res = 0;
        int sum = 0;
        res = a * b;
        sum = t * y;
        if (res <= sum)
        {
            printf("Yes\n");
        }

        else
            printf("No\n");
    }

    return 0;
}