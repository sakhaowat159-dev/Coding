#include <stdio.h>
int main()
{

    int a, max = 0;
    scanf("%d", &a);
    int t[a], sum = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &t[i]);
    }
    max = t[0];
    for (int i = 1; i < a; i++)
    {

        if (max < t[i])
        {
            max = t[i];
        }
    }
    printf("%d\n", max);
    return 0;
}