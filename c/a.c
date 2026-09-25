
#include <stdio.h>
#include <string.h>
    int main()
    {

        int a, X = 0;
        char h[50];
        scanf("%d ", &a);

        for (int i = 1; i <= a; i++)

        {
            scanf("%s", h);

            if (h[1] == '+')

            {
                X++;
            }

            else

                X--;
        }

        printf("%d\n", X);
    
    return 0;
    }