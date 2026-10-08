#include <stdio.h>
#include <math.h>
int main()
{

    float a, b, x, y;
    scanf("%f %f %f %f", &a, &b, &x, &y);

    float h = sqrt(((x - a) * (x - a)) + ((y - b) * (y - b)));

    printf("%.4f\n", h);

    return 0;
}