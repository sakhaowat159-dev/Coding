
#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (b >= a && b >= c)
        {
            printf("Yes\n");
        }

        else
            printf("No\n");
    }
    return 0;
}
