#include <stdio.h>
int main()
{

    int a, b[50], c, sum = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
        sum += b[i];
    }
    scanf("%d", &c);
    printf("A total of %d packages delivered\n", sum);

    printf("Location with more than %d packages:\n", c);

    for (int i = 0; i < a; i++)
    {

        if (b[i]>c)
        {
            printf("Location %d: %d packages\n", i + 1, b[i]);
        }
    }
    return 0;
}