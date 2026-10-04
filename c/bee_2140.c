#include <stdio.h>
int main()
{

    int a, b, temp,diff;

    for (;;)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }

        if (b < a)
        {

            temp = b;
            b = a;
            a = temp;
        }
         diff = (b - a);

        if (diff == 4 || diff == 7 || diff == 12 || diff == 22 || diff == 52 || diff == 102 || diff == 15 || diff == 10 || diff == 25 || diff == 55 || diff == 105 || diff == 20 || diff == 30 || diff == 60 || diff == 110 || diff == 40 || diff == 70 || diff == 120 || diff == 100 || diff == 150 || diff == 200 )

        {
            printf("possible\n");
        }
        else
            printf("impossible\n");
    }
    return 0;
}