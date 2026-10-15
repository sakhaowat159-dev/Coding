#include <stdio.h>
int main()
{

    int a, t[1000], s;
    scanf("%d", &a);
    for (int i = 1; i <= a; ++i)
    {
        scanf("%d", &s);

        for (int i = 0; i < s; ++i)
        {
            scanf("%d", &t[i]);
        }
        printf("Case %d: %d", i, t[s / 2]);
    }
    return 0;
}