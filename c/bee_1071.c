#include <stdio.h>
#include <math.h>
int main()
{

    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    if(a<b)
    {
        int temp;
         temp=a;
        a=b;
        b=temp;
    }

    for (int i = b+1; i <a ; i += 1)

    {

        if (i % 2 != 0)

        {

            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
