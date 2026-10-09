#include <stdio.h>
int main()
{
    int a, b, t[100000], count = 0;
    scanf("%d", &a);
    while (a--)
    {

        scanf("%d", &b);

        for (int i = 0; i < b; i++)
        {

            scanf("%d", &t[i]); // 1 2 3
        }
        int count = 0;
        for (int i = 0; i < b; i++) // 1
        {

            for (int j = i + 1; j < b; j++)
            {
                if (t[i] == t[j])
                {

                    count++;
                    break;
                }
            }
        }
        printf("%d\n", b - count);
    }
    return 0;
}