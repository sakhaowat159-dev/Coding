#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int t[x];
    for (int i = 0; i < x; i++)
    {

        scanf("%d", &t[i]);
    }

    int max = t[0];
    for (int i = 1; i < x; i++)
    {

        if (t[i] > max)
            max = t[i];
    }
    printf("%d\n", max);

    return 0;
}