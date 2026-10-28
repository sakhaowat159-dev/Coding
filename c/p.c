#include <stdio.h>
#include <math.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    double v = pow(a, b);

    printf("%.0lf", v);

    return 0;
}
