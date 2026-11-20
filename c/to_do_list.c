
#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {
        int count = 0;
        int n;
        scanf("%d", &n);
        int t[n];
        for (int i = 0; i < n; i++)
        {

            scanf("%d", &t[i]);
        }
        for (int i = 0; i < n; i++)
        {

            if (t[i] >= 1000)
            {

                count++;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}
