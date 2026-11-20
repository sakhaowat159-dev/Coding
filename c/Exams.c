#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        float res = 0;
        res = (float)(a * b) / 2;

        if (c > res)
        {
            printf("YES\n");
        }

        else
            printf("NO\n");
    }

    return 0;
}