#include <stdio.h>
#include <string.h>

int main()
{
    int c, n;
    char name[100];

    scanf("%d", &c);

    while (c--)
    {
        scanf("%s %d", name, &n);

        if (strcmp(name, "Thor") == 0)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}