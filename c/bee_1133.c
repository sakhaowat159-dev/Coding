#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    if (a>b)

    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    for (int i = a + 1; i < b; i += 1)

    {

        if (i % 5 == 2 || i % 5 == 3)
        {

            printf("%d\n",i);
        }
    }

    return 0;
}
