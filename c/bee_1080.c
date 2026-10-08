#include <stdio.h>
int main()
{
    long long int a, i = 1, highest = 0;
    int count = 0;
    while (i <= 100)

    {

        scanf("%lld", &a);

        if (a > highest)

        {
            highest = a;

            count = i;
        }

        i++;
    }
    printf("%lld\n", highest);
    printf("%d\n", count);
    return 0;
}