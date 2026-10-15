#include <stdio.h>
int main()
{

    int a, b, t[1000], y;
    while (scanf("%d %d", &a, &b) != EOF)
    {

        for (int i = 0; i < a; i++)
        {
            scanf("%d", &t[i]);
        }

        for (int i = 0; i < a - 1; i++)
        {
            for (int j = i + 1; j < a; j++)
            {

                if (t[i] < t[j])
                {
                    int temp = t[i];
                    t[i] = t[j];
                    t[j] = temp;
                }
            }
        }
        for (int k = 1; k <= b; k++)
        {

            scanf("%d", &y);
            printf("%d\n", t[y - 1]);
        }
    }
    return 0;
}
