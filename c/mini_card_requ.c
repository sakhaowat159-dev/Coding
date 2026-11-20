

#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {
        int a;
        scanf("%d", &a);

        if (a % 4 == 0)
        {
            printf("%d\n", (a / 4));
        }
        else
            printf("%d\n", (a / 4) + 1);
    }
    return 0;
}
