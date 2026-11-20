#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        long long int a, res = 0;

        scanf("%lld", &a);

        res = a * 50;

        long long int sum = res * 30 / 100;

        printf("%lld\n", sum);
    }

    return 0;
}