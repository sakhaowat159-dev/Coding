#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a > 5 && a % 5 != 0)

    {
        printf("%d\n", ((a / 5) + 1));
    }

    else if (a < 5 && a % 5 != 0)

    {
        printf("%d\n", ((a / 5) + 1));
    }
    else if (a == 5 || a > 5 && a % 5 == 0)

    {
         printf("%d\n", ((a / 5)));
    }
    

    return 0;
}