#include <stdio.h>
#include <string.h>
int main()
{

    char sami[1000];
    fgets(sami, sizeof(sami), stdin);
    sami[strcspn(sami, "\n")] = '\0';

    int t = strlen(sami) - 1;

    printf("%c", sami[0]);
    printf(" ");

    printf("%c", sami[t]);

    return 0;
}