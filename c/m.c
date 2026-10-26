#include <stdio.h>

int main()
{
    int N, K;

    scanf("%d%d", &N, &K);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0, count = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] % K == 0)
        {
            sum += arr[i];
            
            count++;
        }
    }

    printf("Average = %.2f\n", (float)sum / count);

    printf("Divisible numbers: ");

    for (int i = 0; i < N; i++)
    {
        if (arr[i] % K == 0)
            printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}