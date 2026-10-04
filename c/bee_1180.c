#include <stdio.h>
int main()
{

    int a, b[1000], min = 100000, pos = 0;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {

        scanf("%d", &b[i]);
    }

    for (int i = 0; i < a; i++)

    {

        if (b[i] < min)
        {

            min = b[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n", min);
    printf("Posicao: %d", pos);

    return 0;
}
