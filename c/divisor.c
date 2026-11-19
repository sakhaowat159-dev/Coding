#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    int count = 0;

    for (int i = 1; i * i < a; i++)
    {

        if (a % i == 0)
        {
            count++;
            if (a / i != i)
                count++;
        }
    }
    printf("%d\n", count);

    return 0;
}