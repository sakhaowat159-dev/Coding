#include <stdio.h>
#include <math.h>
int main()
{
    float a, s, d, f, t = 0, p = 0;
    scanf("%f %f %f", &a, &s, &d);

    f = (s * s - (4 * a * d));

    if (f > 0 && a != 0)

    {
        t = (-s + sqrt(f)) / (2 * a);
        p = (-s - sqrt(f)) / (2 * a);
        printf("R1 = %.5f\n", t);
        printf("R2 = %.5f\n", p);
    }
    else
        printf("Impossivel calcular\n");
    return 0;
}
