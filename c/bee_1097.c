#include <stdio.h>
int main()
{
    for (int i = 1; i <= 9; i += 2)
    {

        for (int j = 6; j <= 13; j--)
        {
            if (j == 3)
            {
                break;
            }
            printf("I=%d J=%d\n", i, j + i);
        }
    }

    return 0;
}