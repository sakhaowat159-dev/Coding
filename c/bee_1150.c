#include <stdio.h>
int main()
{

    int a, b, sum, count = 1;
    scanf("%d", &a);

    for (;;)
    {
        scanf("%d", &b);

        if (b > a)
        {
            break;
        }
    }
    sum = a;
    for (;;)
    {
        ++a;
        sum = sum + a;
        count++;
        if (sum > b)
        {
            break;
        }
    }

    printf("%d\n", count);
    return 0;
}