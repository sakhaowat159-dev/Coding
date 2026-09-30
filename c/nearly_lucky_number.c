#include <stdio.h>
int main()
{
     long long int n, h = 0,y=0, digit;
    scanf("%lld", &n);

    for (int i = 1; n>0;i++)

    {
        digit = n % 10;
        if (digit == 4 || digit == 7)
        {
            h++;
        }

        
        
        n = n / 10;
    }
    if (h == 4 || h == 7)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return 0;
}