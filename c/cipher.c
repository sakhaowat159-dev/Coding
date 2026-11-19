#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    getchar();

    char r[1000];
    scanf("%[^\n]", r);

    for (int i = 0; r[i] != '\0'; i++)
    {
        if (r[i] >= 'a' && r[i] <= 'z')
        {
            r[i] = (r[i] - 'a' + 26 - a) % 26 + 'a';
        }
    }
    printf("%s\n", r);

    return 0;
}