#include <stdio.h>

int main()
{
    int marks;

    for (int i = 1; i <= 3; i++)
    {
        printf("Student %d marks: ", i);
        scanf("%d", &marks);

        printf("Marks = %d\n", marks);
    }

    return 0;
}