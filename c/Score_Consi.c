
#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b;
        scanf("%d %d", &a, &b);
        int c, d;
        scanf("%d %d", &c, &d);

        if (c - a >= 0 && d - b >= 0)
        {
            printf("POSSIBLE\n");
        }
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}
