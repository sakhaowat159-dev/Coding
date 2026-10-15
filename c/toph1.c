#include <stdio.h>
int main()
{
    scanf("%d", &n);
    int t[46];
    t[0] = 0;
    t[1] = 1;
    for (int i = 2; i < n; i++)
    {
        t[i] = t[i - 1] + t[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {      
            printf(" ");
        }

        printf("%d", t[i]);
    }

    return 0;
}int n;
    