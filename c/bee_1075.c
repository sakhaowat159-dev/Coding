#include <stdio.h>
int main()
{
    int a, i = 1;
    scanf("%d", &a);
    while (i <= 10000)
    {
        if (i % a == 2)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}