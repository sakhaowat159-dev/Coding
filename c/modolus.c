#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    int a;
    scanf("%d", &a);
    int res = 0;
    res = x % a;

    printf("%d\n", res);
    return 0;
}