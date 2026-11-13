#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100], t[100];

    scanf("%s", arr);

    int k = 0;

    for(int i = 0; arr[i] != '\0'; i++)
    {
        int seen = 0;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                seen++;
                break;
            }
        }

        if(seen)
        {
            continue;
        }

        t[k] = arr[i];
        k++;
    }

    t[k] = '\0';

    int y = strlen(t);

    if(y % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}