#include <stdio.h>
int main()
{

    long long int a, sum = 0;
    scanf("%lld", &a);
    while (a>0)
    {

       long long int y = a % 10;
        if (y==2||y==3||y==5||y==9)
        {
            sum = sum + y;
        }
       

        a = a / 10;
    }
    printf("%lld\n", sum);

    return 0;
}