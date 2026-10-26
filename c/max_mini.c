#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);

    int t[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &t[i]);
    }
    int max = t[0];
    for (int i = 1; i < a; i++)
    {
        if (max < t[i])
        {
            max = t[i];
        }
    }
    printf("%d ", max);

    int min = t[0];
    for (int i = 1; i < a; i++)
    {
        if (min > t[i])
        {
            min = t[i];
        }
    }
    printf("%d\n", min);

    return 0;
}