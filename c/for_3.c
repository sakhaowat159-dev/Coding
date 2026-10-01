
#include <stdio.h>

int main()

{

    int a;
    scanf("%d", &a);
    for (int i = 100; i >= a; i = ((i / 2)))

    {
        printf("%d\n", i);
    }
    return 0;
}
