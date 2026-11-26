#include <stdio.h>

int main()

{

    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int sum = 0, count = 0;
    long long int t[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%lld", &t[i]);
    }

    for (int i = 0; i < a; i++)
    {
        if (t[i] != -1)
        {
            if (sum >= b)
            {
                break;
            }
            sum = sum + t[i];

            count++;
        }
    }
    if (sum < b)
    {
        printf("Mission Failed\n");
        return 0;
    }
    else

        printf("%lld\n", count);

    return 0;
}