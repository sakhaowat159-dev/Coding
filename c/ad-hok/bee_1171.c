#include <stdio.h>
#include<limits.h>
int main()
{

    int a, t[10000] = {1, 2, 3, 4, 5, 6, 7}, max = INT_MAX;

    for (int i = 0; i < 7; i++)
    {

        if (t[i] < max)

        {
            max = t[i];
        }
    }
    printf("%d", max);
    return 0;
}