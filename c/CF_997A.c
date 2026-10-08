#include <stdio.h>
#include <string.h>
 
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
 
    for (int i = 1; i <= b; i++)
 
    {
 
        if (a % 10 == 0)
        {
 
            a = (a / 10);
        }
 
        else if(a%10!=0)
        {
            a = (a - 1);
        }
    }
    printf("%d\n", a);
    return 0;
}