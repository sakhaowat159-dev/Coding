#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int c;
    scanf("%d", &c);
    int res = 0;
    res = x - (a + b + c);

    printf("%d\n", res);
    return 0;
}