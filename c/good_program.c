
#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b;
        scanf("%d", &a);

        if (a % 4 == 0)
        {
            printf("Good\n");
        }

        else
            printf("Not Good\n");
    }
    return 0;
}
