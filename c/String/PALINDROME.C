#include <stdio.h>
#include <string.h>

int main()
{

    char str[1000];
    char t[1000];
    int j = 0;
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int right = strlen(str) - 1;
    for (int i = right; i >=0;i--, j++)
    {
        t[j] = str[i];
    }


t[j] = '\0';
printf("%s\n",t);

    if (strcmp(str, t) == 0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}


//ame korse 
//ager arrsy thaika character nea onno arrete start e bochaise






// onno vabe kora jai je ame sme string cpy korlam 
//then onno array te dilam dea sei array rerverse korlam 