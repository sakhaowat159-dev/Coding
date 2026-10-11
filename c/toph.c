#include <stdio.h>
int main()
{
    int a, b, c[10000],count=0;
    scanf("%d %d", &a, &b);

    for (int i = 0; i < a; i++)
    {

        scanf("%d", &c[i]);
    }
 
    for (int i = 0; i < a - 1; i++)
    {
       
        for (int j = i + 1; j < a; j++)
        {
            if (c[i] + c[j] >= b)
            {
                count = 1;
                break;
            }
        }
    }
    if (count == 1)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}