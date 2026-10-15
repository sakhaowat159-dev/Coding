#include <stdio.h>
#include <limits.h>
int main()
{

    int a, t[10000];
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &t[i]);
    }
    for (int i = 0; i < a - 1; i++)
    {

        for (int j = i + 1; j < a; j++)
        {

            if (t[i] > t[j])
            {
                int temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        // if (i > 0 && t[i] == t[i - 1])
        // {
        //   continue;
        //}

        int count = 0;

        for (int j = 0; j < a; j++)
        {
            if (t[i] == t[j])
            {
                count++;
            }
        }

        printf("%d aparece %d vez(es)\n", t[i], count);
    }

    return 0;
}