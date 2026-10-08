#include <stdio.h>

int main()
{

    int a, s, d;
    scanf("%d", &a);

    for (int i = 1; i <= a; i += 1)

    {
        scanf("%d %d", &s, &d);

        if (d == 0)

        {

            printf("divisao impossivel\n");
        }

        else

            printf("%.1f\n", (float)s / d);
    }
    return 0;
}
