#include <stdio.h>
int main()
{

    int a[100000], n;
    a[0] = 0;
    a[1] = 1;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("%d", a[0]);
        return 0;
    }
    else if (n == 2)

    {
        printf("%d %d", a[0], a[1]);
        return 0;
    }

    else if (n > 2)
    {
        printf("%d", a[0]);
        printf(" ");
        printf("%d", a[1]);
        for (int i = 2; i < n; i++)
        {

            a[i] = a[i - 2] + a[i - 1];

            printf(" %d", a[i]);
        }
    }
    return 0;
}