#include <stdio.h>
int main()
{

    int a, b, n[100000], count = 0;

    while (1)
    {

        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }
        for (int i = 0; i < b; i++)
        {

            scanf("%d", &n[i]);
        }
        int count = 0;
        for (int j = 0; j < b; j++)
        {
            int same = 0;
            for (int i = 0; i <j; i++)
            {

                if (n[j] == n[i])
                {
                    same++;
                }
            }
            if (same == 1)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}