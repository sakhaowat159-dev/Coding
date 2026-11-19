#include <stdio.h>
int main()
{
    int a;

    scanf("%d", &a);
    while (a--)
    {
        int count = 0;
        char arr[1000];
        scanf(" %[^\n]", arr);

        for (int i = 0; arr[i] != '\0'; i++)
        {
            if (arr[i] == 'O')
            {
                count++;
            }
            if (arr[i] >= '0' && arr[i] <= '9')
            {
                count++;
            }
        }
        int over = count / 6;
        int ball = count % 6;
        if (count == 6)
        {
            printf("1 OVER\n");
        }
        else if (count > 6)
        {
            if (over == 1 && ball == 1)
            {
                printf("%d OVER %d BALL\n", over, ball);
            }
            else if (over == 1 && ball > 1)
            {
                printf("%d OVER %d BALLS\n", over, ball);
            }
            else if (over > 1 && ball > 1)
            {
                printf("%d OVERS %d BALLS\n", over, ball);
            }
            else if (over > 1 && ball == 1)
            {
                printf("%d OVERS %d BALL\n", over, ball);
            }
            else if (over > 1 && ball == 0)
            {
                printf("%d OVERS\n", over);
            }
        }
        else
        {
            if (count == 1)
            {
                printf("%d BALL\n", count);
            }
            else
                printf("%d BALLS\n", count);
        }
    }
    return 0;
}