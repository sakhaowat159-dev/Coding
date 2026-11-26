

#include <stdio.h>
int main(void)
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    int tom = 0, jerry = 0;
    while (n > 0 && m > 0)
    {
        int d1 = n % 10;
        int d2 = m % 10;
        if (d1 > d2)
            tom++;
        else if (d2 > d1)
            jerry++;
        n /= 10;
        m /= 10;
    }
    while (n > 0)
    {
        tom++;
        n /= 10;
    }
    while (m > 0)
    {
        jerry++;
        m /= 10;
    }
    if (tom > jerry)
        printf("Tom\n");
    else if (jerry > tom)
        printf("Jerry\n");
    else
        printf("Tie\n");
    return 0;
}