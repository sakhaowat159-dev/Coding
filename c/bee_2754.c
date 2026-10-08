#include <stdio.h>
#include<math.h>
int main()
{

    double a = 234.345, c = 45.698;
    printf("%.6lf - %.6lf\n", a, c);
    printf("%d - %.0lf\n", (int)a,round(c));
    printf("%.1lf - %.1lf\n", a, c);
    printf("%.2lf - %.2lf\n", a, c);
    printf("%.3lf - %.3lf\n", a, c);
    printf("%e - %e\n", a, c);
    printf("%E - %E\n", a, c);
    printf("%g - %g\n", a, c);
    printf("%g - %g\n", a, c);
    return 0;
}