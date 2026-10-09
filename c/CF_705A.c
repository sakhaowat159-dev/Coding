#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
   ;

    for (int i = 1; i <= a; i++)

    {
        if (i % 2 != 0)
        {
            printf("I hate");
        }
        else

            printf("I love");

        if (i < a)
        {
            printf(" that ");
        }
        else
            printf(" it");
    }

    

    return 0;
}