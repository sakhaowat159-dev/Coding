#include <stdio.h>

int gcm(int a, int b);
int lcm(int a, int b)
{

    return (a / gcd(a, b) * b);
}

int main()

{
    int a, b;
    scanf("%d %d", &a, &b);

    int res = lcm(a, b);
    printf("%d", res);

    return 0;
}
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}