#include <stdio.h>
#include <math.h>
int main()
{

    int i, t;
    long long n;
    scanf("%d",&t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld", &n);

        if (n < 3)
        {
            printf("0\n");
        }

        else if (n % 2 == 0)
        {
            printf("%lld\n", ((n / 2) - 1));
        }

        else
        {
            printf("%lld\n", n / 2);
        }
    }
    return 0;
}