
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b, res = 0;
        scanf("%d", &a);

         res = a + 3;
        if (res <= 10)

            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}