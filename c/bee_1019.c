#include <stdio.h>
#include <math.h>
int main()
{

    int a;
    scanf("%d", &a);
    int x = (a / 3600);
    int y = a % 3600;
    int t = y / 60;
    int k = y % 60;

    printf("%d:%d:%d\n", x, t, k);

    return 0;
}