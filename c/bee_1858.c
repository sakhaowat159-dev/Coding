#include <stdio.h>
int main()
{

    int a, j[100], max = 500,pos=0;

    scanf("%d",& a);
    for (int i = 0; i < a; i++)

    {

        scanf("%d", &j[i]);
    }

    for (int i = 0; i < a; i++)
    {

        if (j[i] < max)
        {

            max = j[i];
            pos = i+1;
        }
    }
    printf("%d\n", pos);
    return 0;
}