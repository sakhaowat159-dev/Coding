#include <stdio.h>
int main()

{
    int a, h = 0, r = 0, l = 0;
    scanf("%d", &a);
    int t[a];
    for (int i = 0; i < a; i++)
    {

        scanf("%d", &t[i]);
    }
    printf("%d ", t[0]);
    for (int i = 1; i < a; i++)
    {
        int h = 0;
        if (i % 2 == 0)
        {
            h = 1;
        }
        if (h == 1)
        {
            printf("%d ", t[i]);
        }
    }
    return 0;
}