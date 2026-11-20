#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b;
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            printf("SAME\n");
        }

        else if (a > b)
        {
            printf("CAR\n");
        }
        else
            printf("BIKE\n");
    }
    return 0;
}
