

#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (c % b == 0 && c / b <= a)
        {

            printf("YES\n");
            
        }
        else
            printf("NO\n");
    }
    return 0;
}
