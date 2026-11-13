#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    int sum = 0;

    char arr[1000];
    fgets(arr, sizeof(arr), stdin);

    arr[strcspn(arr, "\n")] = '\0';

    for (int i = 0; arr[i] != '\0'; i++)
    {

        if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
        {
            count++;
        }
        else
            sum++;
    }

    printf("%d\n", sum+1);
     printf("%d\n", strlen(arr));

    return 0;
}