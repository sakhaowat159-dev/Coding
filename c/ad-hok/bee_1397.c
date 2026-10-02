#include <stdio.h>
int main()
{

    int n, a, b;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        int player1 = 0, player2 = 0;
        for (int i = 1; i <= n; i++)

        {

            scanf("%d %d", &a, &b);
            if (a > b)

            {
                player1++;
            }
            else if (b > a)
            {
                player2++;
            }
        }
        printf("%d %d\n", player1, player2);
    }
    return 0;
}