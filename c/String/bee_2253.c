#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{

    char a[101];
    while (fgets(a, sizeof(a), stdin) != NULL)
    {
        int count = 0, point = 0, s = 0, special = 0, sum = 0;
        a[strcspn(a, "\n")] = '\0';
        int l = strlen(a);
        if (l >= 6 && l <= 32)
        {
            s++;
        }

        for (int i = 0; a[i] != '\0'; i++)
        {

            if (a[i] >= 'a' && a[i] <= 'z')
            {
                count++;
            }

            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                sum++;
            }

            if (a[i] >= '0' && a[i] <= '9')
            {
                point++;
            }
            if (!isalnum((unsigned char)a[i]))
            {
                special++;
            }
        }

        if (s >= 1 && count >= 1 && sum >= 1 && point >= 1 && special == 0)
        {
            printf("Senha valida.\n");
        }
        else
            printf("Senha invalida.\n");
    }
    return 0;
}