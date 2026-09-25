#include <stdio.h>
#include <string.h>

int main()
{
    int a, d, h=0;

    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {

        scanf("%d", &d);

        if (d == 1)
        {
            h =1;
        }
    }

    if (h == 1)
    {
        printf("HARD\n");
    }
    else

        printf("EASY\n");

    return 0;
}