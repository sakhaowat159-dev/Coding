#include <stdio.h>

int main()
{
    int freq[100001];
    int a[200001];
    int t, n, i, x;

    long long sum;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            freq[a[i]]++;
        }

        sum = 0;
        for (i = 0; i < n; i++)
        {
            x = a[i];
            sum += (long long)x * freq[x] * freq[x];
            freq[x] = 0;                            
        }
        printf("%lld\n", sum);
    }
    return 0;
}