#include <stdio.h>
int main()
{
    int a, c, i, temp;
    int sum = 0;
    scanf("%d %d", &a, &c);

    if (c < a)
    {
        temp = a;
        a = c;
        c = temp;
    }
    i = a;
    while (i <= c)
    {

        if (i % 13 != 0)
        {
            sum += i;
        }
        i++;
    }
    printf("%d\n", sum);

    return 0;
}