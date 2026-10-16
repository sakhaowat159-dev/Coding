#include <stdio.h>
int main()
{

    long long a, b, c, max = -100000, second_max;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a >= b && a <= c || a >= c && a <= b)
    {
        printf("%lld\n", a);
    }

    else if (b >= a && b <= c || b >= c && b <= a)

    {
        printf("%lld", b);
    }
    else

        printf("%lld", c);

    return 0;
}