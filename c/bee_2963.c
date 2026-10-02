#include <stdio.h>
int main()
{

    int a[100000], b, g=0,h=0;
    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
 
    for (int i = 1; i <= b; i++)
    {
       
        if (a[0] >= a[i])
        {
            h = 1;
        }
        else
            g = 1;
    }

    if (g == 1)
    {
        printf("N\n");
    }
    else if (h == 1)
    {
        printf("S\n");
    }

    return 0;
}
