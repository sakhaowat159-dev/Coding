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

    for (int i = 0; i < a; i++)
    {
        int count = 0;
                    
        for (int j = 0; j < a; j++)
        {
            if (t[i] == t[j])
            {
                count++;
            }
        }
        printf("%d occurs %d times\n", t[i], count);
    }

    return 0;
}