#include <stdio.h>
int main()
{

    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("A =       %d, B =         %d,\nC =        %d\n",A,B,C);
    printf("A = %010d, B = %010d,\nC = %010d\n",A,B,C);
    printf("A = %d      , B = %d        ,\nC = %d\n",A,B,C);

    return 0;
}