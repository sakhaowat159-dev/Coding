#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{

    char ar[1000], st[1000];
    fgets(ar, sizeof(ar), stdin);
    ar[strcspn(ar, "\n")] = '\0';

    fgets(st, sizeof(st), stdin);
    ar[strcspn(st, "\n")] = '\0';
    strcat(ar, " ");
    strcat(ar, st);
    printf("%s\n", ar);

    return 0;
}