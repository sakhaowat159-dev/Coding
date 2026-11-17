#include <stdio.h>

int gcd(int a, int b)
{if(b==0)
    return a;
    // while (b > 0)
    // {

    // int t = a % b;

    // a = b;
    //   b = t;
    //}
    return gcd(b, a%b);
}

int main()

{
    int a = 18, b = 12;
    int res = gcd(a, b);

    printf("%d\n", res);

    return 0;
}