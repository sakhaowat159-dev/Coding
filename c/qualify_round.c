
#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int res = b + (c * 2);
        if (a <= res)
        {
            printf("Qualify\n");
        }
        else
            printf("NotQualify\n");
    }
    return 0;
}
