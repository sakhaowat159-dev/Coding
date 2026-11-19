#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    if (a % 4 == 0 && a % 400 != 0)

    {
        printf("Yes\n");
    }

    else

        printf("No\n");

    return 0;
}