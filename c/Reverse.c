
#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {
        int a;
        scanf("%d", &a);
        int res = 0;
        while (a != 0)
        {
            int t = a % 10;
           res = res * 10 + t;

            a = a / 10;
        }
        printf("%d\n", res);
    }
    return 0;
}
