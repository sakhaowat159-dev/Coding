#include <stdio.h>
int main()
{
    int a, count = 0;
    scanf("%d", &a);
    int t[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &t[i]);
    }

    int s;
    scanf("%d", &s);

    for (int i = 0; i < a; i++)
    {

        if (t[i] == s)
        {
            
           count++;
        }
    }
    if(count)

    return 0;
}