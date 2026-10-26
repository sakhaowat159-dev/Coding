#include <stdio.h>
int main()

{
    int a, h = 0, r = 0;
    scanf("%d", &a);
    int t[a];
    for (int i = 0; i < a; i++)
    {

        scanf("%d", &t[i]);
    }
    for (int i = 0; i < a; i++)
    {

        if (t[i] % 2 == 0)
        {
            h += t[i];
        }

        else
        {
            r += t[i];
        }
    }
    printf("h: %d\n r: %d\n", h, r);
    return 0;
}