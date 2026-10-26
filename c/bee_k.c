#include <stdio.h>
int main()
{

    int a, count;
    scanf("%d", &a);
    while(a)
    {
        int y = a % 10;
        if (y != 0)
        {
            count++;
        }
        a = a / 10;
    }
    printf("%d", count);
    return 0;
}
