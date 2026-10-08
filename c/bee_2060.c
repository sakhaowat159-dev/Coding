#include <stdio.h>

int main()
{
    int a, s[1000], count = 0, sum = 0, d = 0, o = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i += 1)
    {
        scanf("%d", &s[i]);

        if (s[i] % 2 == 0)

        {
            count += 1;
        }

         if (s[i] % 3 == 0)

        {
            sum += 1;
        }

         if (s[i] % 4 == 0)

        {
            d += 1;
        }

         if (s[i] % 5 == 0)

        {
            o += 1;
        }
    }
    printf("%d Multiplo(s) de 2\n", count);
    printf("%d Multiplo(s) de 3\n", sum);
    printf("%d Multiplo(s) de 4\n", d);
    printf("%d Multiplo(s) de 5\n", o);

    return 0;
}
