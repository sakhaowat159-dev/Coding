#include <stdio.h>
#include <string.h>
int main()
{
    int count;
    printf("Enter total students  : \n");
    scanf("%d", &count);
    long long id[count], marks[count], search, t;
    char name[count][100];

    for (int i = 0; i < count; i++)
    {
        printf("Enter %dst student name: \n", i + 1);
        scanf("%s", name[i]);

        printf("Enter %dst student ID: \n", i + 1);
        scanf("%lld", &id[i]);

        printf("Enter %dst student Marks: \n", i + 1);
        scanf("%lld", &marks[i]);
    }

    printf("Input your desired Id for mark: \n");
    scanf("%lld", &search);
    printf("Checking ID...\n");
    int h = 0;
    for (int i = 0; i < count; i++)

    {
        if (search == id[i])

        {
            h++;
            printf("%lld ID is valid\n", search);
            break;
        }
    }
    if (h == 1)
    {
        for (int i = 0; i < count; i++)

        {

            if (id[i] == search)
            {
                printf("Name: %s\n", name[i]);

                printf("ID: %lld\n", id[i]);

                printf("Your obtained Mark is: %lld\n", marks[i]);
                break;
            }
        }
    }
    else
        printf("Invalid ID\n");

    return 0;
}