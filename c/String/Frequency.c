#include <stdio.h>
#include <string.h>
int main()
{int l=0;
    char t[100];

    char arr[100];
    scanf("%s", arr);

    for (int i = 0; arr[i] != '\0'; i++)
    {

        int seen = 0;
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                seen++;

                break;
            }
        }
        if (seen)
        {

            continue;
        }

        int count = 0;
        for (int j = 0; arr[j] != '\0'; j++)

        {
            if (arr[i] == arr[j])
            {
                // count++;

                t[l] = arr[i];
                l++;
            }
        }

//printf("%c is %d times\n", arr[i], count);
        int y =0;
        y= strlen(t);
        t[l]='\0';

       if (y % 2 == 0)
        {
           printf("CHAT WITH HER!\n");
       }

       else

            printf("IGNORE HIM!\n");
    }
    printf("%s",t);

    return 0;
}