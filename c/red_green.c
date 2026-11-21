#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {
        int count = 0;
        int a, b;
        scanf("%d %d", &a, &b);
        int t[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &t[i]);
        }

        for (int i = 0; i < a; i++)

        {

            if (b < t[i])

            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}