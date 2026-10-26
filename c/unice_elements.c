#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    int t[a];
    for (int i = 0; i < a; i++)
    {

        scanf("%d", &t[i]);
    }
    printf("Unique Elements: ");
    for (int i = 0; i < a; i++)
    {
        int count = 0, q = t[i];

        for (int j = 0; j < a; j++)
        {
            if (q == t[j])
            {
                count++;
            }
        }
        if (count <= 1)
        {
            printf("%d ",q);
        }
    }

    return 0;
}