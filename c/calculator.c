#include <stdio.h>
int main()
{

    double n1, n2;
    char op;
    scanf("%lf %c %lf", &n1, &op,&n2);

    switch (op)
    {
    case '+':
        printf("%.1lf+%.1lf", n1 + n2);

        break;

    case '-':
        printf("%.1lf-%.1lf", n1 - n2);
        break;
    case '*':
        printf("%.1lf*%.1lf", n1 * n2);
        break;
    case '/':
        printf("%.1lf/%.1lf", n1 / n2);
        break;

    default:
        printf(" operation is not  correct  ");
    }
}
