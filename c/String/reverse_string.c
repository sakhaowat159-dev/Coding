#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000];
    fgets(arr, sizeof(arr), stdin);
    arr[strcspn(arr, "\n")] = '\0';
    int j = strlen(arr) - 1;

    for (int i = 0; i <= j; i++, j--)
    {

        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("%s\n",arr);

    return 0;
}