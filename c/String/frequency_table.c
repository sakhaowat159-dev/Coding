#include <stdio.h>
#include <string.h>
int main()
{

    char ar[1000], ch;
    fgets(ar, sizeof(ar), stdin);
    ar[strcspn(ar, "\n")] = '\0';

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        int count = 0;

        for (int i = 0; ar[i] != '\0'; i++)
        {

            if (ar[i] == ch)
            {

                count++;
            }
        }
        if (count >= 1)
        {
            printf("%c %d\n", ch, count);
        }
    }

    return 0;
}