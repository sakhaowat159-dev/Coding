#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    int h=a;
    int ulta = 0;

    while (a)
    {

        int t = a % 10;

        ulta = ulta * 10 + t;
        a /= 10;
    }
    printf("%d\n", ulta);

    if (ulta == h)
    {
        printf("Palindrome\n");
    }
    else

        printf("Not palindrome\n");

    return 0;
}