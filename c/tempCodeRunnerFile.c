#include <stdio.h>

int main() {
    int i, number;
    int factorial = 1;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        factorial = factorial * i;
    }

    printf("Factorial = %d\n", factorial);

    return 0;
}