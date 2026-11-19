#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    int t[a], sum = 0, count = 0;

    for (int i = 0; i < a; i++)

    {
        scanf("%d", &t[i]);
        sum = sum + t[i];
        count++;

        double res = (double)sum / count;

        printf("%.10lf\n", res);
    }

    return 0;
}