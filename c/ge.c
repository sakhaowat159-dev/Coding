
#include <stdio.h>

int main()
{
    int N, age[1000], count = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &age[i]);

        if (age[i] > 20)
        {
            count++;
        }
    }

    if (count == N)
    {
        printf("Saved All\n");
    }
    else
    {
        printf("Only few are saved and the following are dead :\n");

      //  int first = 1;

        for (int i = 0; i < N; i++)
        {
            if (age[i] <= 20)
            {

                printf("%d ", age[i]);
               
            }
        }

        printf("\n");
    }

    return 0;
}
