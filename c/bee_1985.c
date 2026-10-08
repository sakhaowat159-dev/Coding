#include <stdio.h>
int main()
{

    int x, code, nmbr, i;
    scanf("%d", &x);
   float p=0;
    for (i = 1; i <= x; i += 1)
    {
         float price = 0;
       
        scanf("%d", &code);
       
        scanf("%d", &nmbr);
        if (code == 1001)
        {
             price = (nmbr * 1.50);
        }

        else if (code == 1002)

        {
             price = (nmbr * 2.50);
        }

        else if (code == 1003)

        {
             price = (nmbr * 3.50);
        }

        else if (code == 1004)

        {
             price = (nmbr * 4.50);
        }

        else if (code == 1005)

        {
             price = (nmbr * 5.50);
        }
         p = p + price;
    }
    printf("%.2f\n", p);

    return 0;
}
