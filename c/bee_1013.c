#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x = (a + b + abs(a - b)) / 2;
    int y = (x + c + abs(x - c)) / 2;
    printf("%d eh o maior\n", y);

    return 0;
}