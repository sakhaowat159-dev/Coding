#include <stdio.h>
int main()
{
    long long int a, b;
    while (1)
    {

        scanf("%lld %lld", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }
        else
        {
            printf("%lld\n", a * b);
        }
    }
    return 0;
}