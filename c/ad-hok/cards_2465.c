#include <stdio.h>
int main()
{

    int array[5], increment = 1, decrement = 1;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 1; i < 5; i++)
    {
        if (array[i] < array[i - 1])
        {
            increment = 0;
        }
    }

    for (int i = 1; i < 5; i++)
    {
        if (array[i] > array[i - 1])
        {
            decrement = 0;
        }
    }

    if (increment)
    {
        printf("C\n");
    }
    else if (decrement)
    {
        printf("D\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}