#include <stdio.h>
int isprime(int x);

int main()
{
    int a;
    scanf("%d", &a);
    int res = isprime(a);

    if (res)
    {
        printf("Yes\n");
    }
    else
        printf("No\n");

    return 0;
}
int isprime(int x)
{
    if (x < 2)
    {
        return 0;
    }

    for (int i = 2; i * i <= x; i++)
    {

        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}