#include <stdio.h>
#include <math.h>
int main()
{

    int a[4], t, r, j;
    for (int i = 0; i < 5; i += 1)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i += 1)
    {

        if (a[i] < a[i + 1])
        {

            t = 1;
        }

        else if (a[i] > a[i + 1])
        {

            r = 1;
        }
       
    }

    if (t == 1)
    {
        printf("C\n");
    }

    else if (r == 1)
    {
        printf("D\n");
    }
    else 

    {
        printf("N\n");
    }
    return 0;
}