#inclyude < stdio.h>
int main()
{

    long long int a, sheep[10000000];
    long long int count = 0;
    scanf("%lld", &a);
    for (int i = 0; i < a; i++)

    {

        scanf("%lld", &sheep[i]);
    }
    for (int i = 0; i < a; i++)
    {
        

            if (sheep[i] % 2 != 0)
        {
            count = (count + (sheep[i] - 1));
            
        }
else if()


    }

    return 0;
}