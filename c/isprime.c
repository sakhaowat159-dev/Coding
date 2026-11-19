#include <stdio.h>
#include <string.h>

int main()
{

    int a,count=0;
    scanf("%d", &a);
    for (int i = 2;  i <= a; i++)
    {
        if (a < 2)
        {
            printf("No\n");
            return 0;
        }

        if (a % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {

        printf("Yes\n");
    }
    else
        printf("No\n");

    return 0;
}
