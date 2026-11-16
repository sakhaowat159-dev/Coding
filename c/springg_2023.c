#include <stdio.h>
int main()
{

    int n, t, s;
    scanf("%d %d %d", &n, &t, &s);
    if (n <= t && n <= s)
    {
        printf("Yes\n");
    }
    else
        printf("No\n");

    return 0;
}