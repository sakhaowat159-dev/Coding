#include <stdio.h>
#include <string.h>
int main()
{

    char sami[1000];
    fgets(sami, sizeof(sami), stdin);
    sami[strcspn(sami, "\n")] = '\0';

    for (int i = 0; sami[i] != '\0'; i++)
    {

        if (sami[i] >= 'a' && sami[i] <= 'z' || sami[i] >= 'A' && sami[i] <= 'Z')
            printf("%c", sami[i]);
    }
    return 0;
}