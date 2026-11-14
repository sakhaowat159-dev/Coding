#include <stdio.h>
int main()
{
    int a ;

    int x;
    scanf("%d", &x);

    while (x--)
    {
        scanf("%d", &a);
        long long b = 0, c = 1;
        for (int i = 1; i <= a; i++)
        {

            long long  next = b + c;
            b = c;
            c = next;
        }
        printf("Fib(%d) = %lld\n",a,b);
    }
    return 0;
}