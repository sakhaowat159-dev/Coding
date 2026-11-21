#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x--)

    {
        int a;
        scanf("%d", &a);
        getchar();
        char arr[1000];

        scanf("%[^\n]", &arr);

        for (int i = 0; i < a; i++)

        {
            if (arr[i] == 'A')
            {
                arr[i] = 'T';
            }
            else if (arr[i] == 'T')
            {
                arr[i] = 'A';
            }
            else if (arr[i] == 'C')
            {
                arr[i] = 'G';
            }
            else if (arr[i] == 'G')
            {
                arr[i] = 'C';
            }
        }

        printf("%s\n", arr);
    }
    return 0;
}