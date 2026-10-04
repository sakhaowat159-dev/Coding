#include <stdio.h>
int main()
{

    int a, i = 0;
    scanf("%d", &a);

    while (i <= a)

    {

        printf("%d", i);

        if (i == 1)
        {
            i=i+-- i;
        }

        else
            i = i + 1;
    }

    return 0;
}