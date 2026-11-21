#include <stdio.h>
int main()
{
    long long int x;
    scanf("%lld", &x);
    while (x--)
    {
        int cur = 0, mx = -1000000000, mn = 1000000000;
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        long long int t[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%lld", &t[i]);
        }

        for (int i = 0; i < a; i++)
        {
            if (t[i] >= b && t[i] <= c)
            {
                cur++;
            }
            else
                cur--;

            if (cur > mx)
                mx = cur;
            if (cur < mn)
                mn = cur;
        }

        printf("%d %d\n", mx, mn);
    }

    return 0;
}