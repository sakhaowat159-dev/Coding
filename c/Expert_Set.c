#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);

    while (x--)

    {
      long long  int a, b;
        scanf("%lld %lld", &a, &b);
        float res = 0;
        res = (float)a / 2;

        if (res <= b)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}