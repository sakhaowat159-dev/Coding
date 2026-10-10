#include <stdio.h>
int main()
{

    char name[10][50];
    for (int i = 0; i < 10; i++)
    {

        scanf("%s", name[i]);
    }

    printf("%s\n",name[2]);

    printf("%s\n",name[6]);

    printf("%s\n",name[8]);

    return 0;
}