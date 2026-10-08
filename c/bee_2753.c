#include <stdio.h>

int main()
{
    int i = 97;
    char a;

    for (i = 97; i <= 122; i += 1)
    {
        printf("%d e %c\n", i, i);
    }

    return 0;
}