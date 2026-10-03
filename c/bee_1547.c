#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a, b, c, j[200];
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        scanf("%d %d", &b, &c); // c=35 b=7 ta input
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &j[i]);
        }
        int count = 10000, pos = 0;
        for (int i = 0; i < b; i++)
        {

            int deff = abs(c - j[i]);

            if (deff < count)
            {
                count = deff;
                pos=i+1;
            }
        }
        printf("%d\n", pos);
    }

    return 0;
}