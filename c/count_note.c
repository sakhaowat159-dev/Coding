#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a;
        scanf("%d", &a);

        int res = a * 10;
        printf("%d\n", res);
    }

    return 0;
}