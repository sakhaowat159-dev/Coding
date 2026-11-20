#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    while (a--)
    {

        int n, x;
        scanf("%d %d", &n, &x);

        if (x >= n)
        {
            printf("0\n");
        }

        else if (n > x)
        {
            int res = n - x;
            if (res % 4 != 0)
            {
                printf("%d\n", (res / 4) + 1);
            }
            else
                printf("%d\n", (res / 4));
        }
    }
    return 0;
}
