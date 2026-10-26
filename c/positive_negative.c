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
    for (int i = 0; i < a; i++)
    {

        if (t[i] > 0)
        {
            h++;
        }

        else if (t[i] < 0)
        {
            r++;
        }
        else
        {
            l++;
        }
    }
    printf("h: %d\nr: %d\nl: %d", h, r, l);
    return 0;
}