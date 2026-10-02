#include <stdio.h>
int main()
{

    int a = 2002, b;
    while (1)
    {
        scanf("%d", &b);

        if (b == a)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}