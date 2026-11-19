#include <stdio.h>
int main()

{

    int a, b;
    scanf("%d %d", &a, &b);
    int res = 0;
    res = b % a;
    if (res != 0)
        printf("%d\n", a - res);
    else
        printf("%d\n", res);

    return 0;
}