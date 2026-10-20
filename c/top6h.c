#include <stdio.h>
int main()
{

    int v, r, x;
    scanf("%d %d %d", &v, &r, &x);
    int total = ((v * 3 * x) + (r * x));
    printf("%d\n", total);

    return 0;
}