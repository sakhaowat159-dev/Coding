#include <stdio.h>
#include <string.h>
int main()
{

    char arr[600];
    scanf("%[^\n]", arr);
    int t = strlen(arr);
    if (t <= 80)
    {

        printf("YES\n");
    }

    else
        printf("NO\n");

    return 0;
}