#include <stdio.h>
int main()

{
    int a, h = 0, r = 0;
    scanf("%d", &a);
    int t[a];
    for (int i = 0; i < a; i++)
    {

        scanf("%d", &t[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", t[i] * t[i]);
        
    }
    return 0;
}