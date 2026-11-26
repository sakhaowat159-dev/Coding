#include <stdio.h>
#include <string.h>

int main()
{
    char arr[600];
    char big[200] = "";
    int bigLen = 0;

    while (1)
    {
        scanf(" %599[^\n]", arr);
        if (strcmp(arr, "0") == 0)
            break;

        int count = 0;
        int start = 0;
        int first = 1;

        for (int i = 0; ; i++)
        {
            if (arr[i] == ' ' || arr[i] == '\0')
            {
                if (!first)
                    printf("-");
                printf("%d", count);
                first = 0;

                if (count >= bigLen)
                {
                    bigLen = count;
                    strncpy(big, arr + start, count);
                    big[count] = '\0';
                }

                count = 0;
                start = i + 1;

                if (arr[i] == '\0')
                    break;
            }
            else
            {
                count++;
            }
        }
        printf("\n");
    }

    printf("\nThe biggest word:\n%s\n", big);
    return 0;
}