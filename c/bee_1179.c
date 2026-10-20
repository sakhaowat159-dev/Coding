#include <stdio.h>
int main()
{

    int t[15], par[5], impar[5];
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &t[i]);
    }
    while (3 --)
    {
        for (int i = 0; i < 5; i++)
        {

            if (t[i] % 2 == 0)

            {

                par[i] = t[i];
                printf("par[%d] = %d\n", i, par[i]);
            }
            else
            {
                impar[i] = t[i];
                printf("impar[%d] = %d\n", i, impar[i]);
            }
        }
        i=i+
    }

    return 0;
}