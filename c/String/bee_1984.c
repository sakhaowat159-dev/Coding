#include <stdio.h>
int main()
{

    unsigned long long n;
    scanf("%llu", &n);
    while (n)
    {

        unsigned long long t = n % 10;
        printf("%llu", t);

        n = n / 10;
    }
    printf("\n");
    
    return 0;
}