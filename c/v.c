#include <stdio.h>

int main()
{
    int t[100], a,count=0;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &t[i]); //{1,2,3,3,5,6};
    }

    for (int i = 0; i < a - 1; i++)
    {

        for (int j = i+1; j < a; j++)
        {
            if (t[i] == t[j])
            {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}