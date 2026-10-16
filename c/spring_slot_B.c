#include <stdio.h>
int main()
{

    long long t[100000],i,j,a;
    scanf("%lld ", &a);

    for (int i = 0; i < a; i++)
        
    {

        scanf("%lld", &t[i]);
    }
    
    for (int i = 0; i < a ; i++)
    {long long  count = 0;

        for (int j = i + 1; j < a; j++)
        {

            if (t[i] == t[j])
            {
                count++;
            }
        }
        printf("%lld ", count);
    }

    return 0;
}