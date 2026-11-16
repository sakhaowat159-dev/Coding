#include <stdio.h>
#include <math.h>
int main()
{

    int n, t, s, a;
    scanf("%d %d %d %d", &n, &t, &s, &a);

    double y, r, b, bl;
    scanf("%lf %lf %lf %lf", &y, &r, &b, &bl);

    float dis = sqrt(pow((n - s), 2) + pow((t-a), 2));

    if (dis <= y)
    {
        printf("100\n");
    }
    else if (dis <= r)
    {

        printf("75\n");
    }
    else if (dis <= b)
    {

        printf("50\n");
    }
    else
        printf("25\n");

    return 0;
}