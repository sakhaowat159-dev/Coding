#include <stdio.h>
int main()
{

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {

        if (arr[i] <= 0)
        {
            arr[i] = 1;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("X[%d] = %d\n",i,arr[i] );
    }
    return 0;
}