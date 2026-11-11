#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0, sum = 0;
    int digit = 0, space = 0;

    char arr[100];

    fgets(arr, sizeof(arr), stdin);

    // vowel
    for (int i = 0; arr[i] != '\0'; i++)
    {

        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'U' || arr[i] == 'O' || arr[i] == 'I' || arr[i] == 'E' || arr[i] == 'A')
        {

            count++;
        }
    }
    printf("Vouwels %d\n", count);

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
        {
            if (arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u' && arr[i] != 'U' && arr[i] != 'O' && arr[i] != 'I' && arr[i] != 'E' && arr[i] != 'A')
            {

                sum++;
            }
        }
    }
    printf("consonants %d\n", sum);

    for (int i = 0; arr[i] != '\0'; i++)
    {

        if (arr[i] >= '0' && arr[i] <= '9')
        {
            digit++;
        }
    }
    printf("Digit %d\n", digit);

    for (int i = 0; arr[i] != '\0'; i++)
    {

        if (arr[i] == ' ')
        {

            space++;
        }
    }
    printf("space %d\n", space);

    return 0;
}