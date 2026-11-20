

#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int t[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &t[i]);
        }
        int count = 0;
        for (int i = 0; i < a; i++)
        {

            if (t[i] >= b)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
