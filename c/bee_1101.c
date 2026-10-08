#include <stdio.h>

int main()
{
    int m, n, temp, sum;

    while (1)
    {
        if (scanf("%d %d", &m, &n) != 2)
            break;
        if (m <= 0 || n <= 0)
            break;

        if (n > m)
        {
            temp = n;
            n = m;
            m = temp;
        }

        sum = 0;
        for (int i = n; i <= m; i++)
        {
            printf("%d ", i);
            sum = sum + i;
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}