#include <stdio.h>
int main()
{

    int x, count = 0, sum = 0;
    scanf("%d", &x);

    int t[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &t[i]);
    }

    for (int i = 0; i < x; i++)
    {

        if (t[i] % 2 != 0)
        {
            sum++;
        }
        else if (t[i] % 2 == 0)
        {

            count++;
        }
    }

    if (count > sum)
    {
        printf("READY FOR BATTLE\n");
    }
    else
        printf("NOT READY\n");

    return 0;
}