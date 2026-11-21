#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {
        int count = 0;

        int a;
        scanf("%d", &a);

        int t[a];
        for (int i = 0; i < a; i++)
        {

            scanf("%d", &t[i]);
        }

        for (int i = 0; i < a-1; i++)

        {

            if (t[i] <= t[i + 1])
            {
                count++;
            }
        }
        if (count == a - 1)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }

    return 0;
}