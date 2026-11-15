#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int a;

    int n;
    while (scanf("%d", &a) == 1 && a != 0)

    {

        int total = 0;
        char sami[100];
        for (int i = 1; i <= a; i++)
        {

            scanf("%d", &n);
            //getchar();
            scanf(" ");

            fgets(sami, sizeof(sami), stdin);
            sami[strcspn(sami, "\n")] = '\0';

            if (strcmp(sami, "suco de laranja") == 0)
                total += n * 120;

            else if (strcmp(sami, "morango fresco") == 0)
                total += n * 85;

            else if (strcmp(sami, "mamao") == 0)
                total += n * 85;

            else if (strcmp(sami, "goiaba vermelha") == 0)
                total += n * 70;

            else if (strcmp(sami, "manga") == 0)
                total += n * 56;

            else if (strcmp(sami, "laranja") == 0)
                total += n * 50;

            else if (strcmp(sami, "brocolis") == 0)
                total += n * 34;
        }
        if (total > 130)
        {
            printf("Menos %d mg\n", total - 130);
        }
        else if (total < 110)
        {
            printf("Mais %d mg\n", 110 - total);
        }
        else
            printf("%d mg\n", total);
    }

    return 0;
}