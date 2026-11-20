
#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b;
        scanf("%d %d", &a, &b);
        int res = (a * 100)/10;
        int sum = (b * 100) / 20;
        if (res == sum)
        {

            printf("ANY\n");
        }

        else if (res > sum)
        {
            printf("FIRST\n");
        }
        else
            printf("SECOND\n");
    }
    return 0;
}
