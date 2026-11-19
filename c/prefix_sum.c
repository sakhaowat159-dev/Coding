#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    int t[a];
    int prefix[a];
    for (int i = 0; i < a; i++)
    {

        scanf("%d", &t[i]);
    }
     prefix[0] = t[0];
    for (int i = 1; i < a; i++)
    {

        prefix[i] = t[i] + prefix[i - 1];
    }
    for (int i = 0; i < a; i++)
    {

        printf("%d ", prefix[i]);
    }

    return 0;
}