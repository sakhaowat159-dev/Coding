#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{

    char str[1000];
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != 0; i++)
    {
        str[i] = tolower((unsigned char)str[i]);
    }
    printf("%s\n", str);

    return 0;
}
