#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);

    int b = a / 3;
    int c = a / 3;
    int res = 0;
    res = a - (b + c);
    printf("%d %d %d\n", b, c, res);

    return 0;
}