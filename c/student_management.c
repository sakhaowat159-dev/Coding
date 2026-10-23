#include <stdio.h>
#include <string.h>

void input_section(int count, char name[][100], long long id[], long long marks[])
{

    for (int i = 0; i < count; i++)
    {
        if (i == 0)
        {
            printf("Enter %dst student name: \n", i + 1);
            scanf("%s", name[i]);

            printf("Enter %dst student ID: \n", i + 1);
            scanf("%lld", &id[i]);

            printf("Enter %dst student Marks: \n", i + 1);
            scanf("%lld", &marks[i]);
        }
        else if (i == 1)
        {
            printf("Enter %dnd student name: \n", i + 1);
            scanf("%s", name[i]);

            printf("Enter %dnd student ID: \n", i + 1);
            scanf("%lld", &id[i]);

            printf("Enter %dnd student Marks: \n", i + 1);
            scanf("%lld", &marks[i]);
        }

        else if (i == 2)
        {
            printf("Enter %drd student name: \n", i + 1);
            scanf("%s", name[i]);

            printf("Enter %drd student ID: \n", i + 1);
            scanf("%lld", &id[i]);

            printf("Enter %drd student Marks: \n", i + 1);
            scanf("%lld", &marks[i]);
        }

        else if (i >= 3)
        {
            printf("Enter %dth student name: \n", i + 1);
            scanf("%s", name[i]);

            printf("Enter %dth student ID: \n", i + 1);
            scanf("%lld", &id[i]);

            printf("Enter %dth student Marks: \n", i + 1);
            scanf("%lld", &marks[i]);
        }
    }
}

int main()
{
    printf("===== Student Management System =====\n");
    int count;
    printf("Enter total students number: \n");
    scanf("%d", &count);
    if (count <= 0)
    {
        printf("Invalid student count.\n");
        return 0;
    }
    long long id[count], marks[count], search, t;
    char name[count][100];

    input_section(count, name, id, marks);

    printf("Input your desired Id for details: \n");
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