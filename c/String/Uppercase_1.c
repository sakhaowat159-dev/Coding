#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{

    char ar[1000];
    fgets(ar, sizeof(ar), stdin);
    ar[strcspn(ar, "\n")] = '\0';

    for (int i = 0; ar[i] != '\0'; i++)
    {

        ar[i] = toupper((unsigned char)ar[i]);
    }
    printf("%s", ar);
    return 0;
}