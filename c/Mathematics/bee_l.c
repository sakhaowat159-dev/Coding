#include <stdio.h>
int main()
{
   long long int student;
    scanf("%lld", &student);
    if (student % 4 == 0)
    {
        printf("%lld\n", (int)student / 4);
    }
    else if (student % 4 != 0)
    {
        printf("%lld\n",(int)(student / 4) + 1);
    }

    return 0;
}