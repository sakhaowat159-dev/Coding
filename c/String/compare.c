#include <stdio.h>
#include <string.h>
int main()
{

    char sami[1000], rifat[1000];
    fgets(sami, sizeof(sami), stdin);
    sami[strcspn(sami, "\n")] = '\0';

    fgets(rifat, sizeof(rifat), stdin);
    rifat[strcspn(rifat, "\n")] = '\0';

    int t = strcmp(sami, rifat);
    if (t == 0)
    {
        printf("EQUAL\n");
    }

    else if (t < 0)
    {
        printf("1st string\n");
    }
    else
        printf("2nd string\n");
    return 0;
}