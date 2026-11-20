#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b, c, d, res = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        res = (a + b + c + d);
        if (res == 0)
        {
            printf("IN\n");
        }

        else
            printf("OUT\n");
        
    }

    return 0;
}