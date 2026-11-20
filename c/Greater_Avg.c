#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        float avg = (float)(a + b) / 2.0;

        if (avg > c)
        {
            printf("YES\n");
        }
        else if (avg <= c)
        {

            printf("NO\n");
        }
    }

    return 0;
}