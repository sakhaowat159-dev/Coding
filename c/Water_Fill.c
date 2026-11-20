#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while(x--)
    {

        int a, b, v;
        scanf("%d %d %d", &a, &b, &v);
        if ((a + b == 0) || (b + v == 0) || (v + a == 0))

        {
            printf("Water filling time\n");
        }
        else
        {
            printf("Not now\n");
        }
    }

    return 0;
}