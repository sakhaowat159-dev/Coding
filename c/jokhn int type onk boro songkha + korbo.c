#include <stdio.h>
#include <math.h>
int main()
{

    long long  a, b, sum=0;
    scanf("%lld %ld", &a, &b);
    sum=((a+b)*(b-a+1))/2;
    printf("%lld",sum);
    return 0;
}