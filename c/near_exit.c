
#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a;
        scanf("%d", &a);

        int res = a - 1;
        int sum = 100 - a;

        if (res <= sum)
        {
            printf("LEFT\n");
        }
        else
            printf("RIGHT\n");



    }
    return 0;
}
