#include < stdio.h>
int main()
{

    int a, count;
    scanf("%d", &a);
    int t[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &t[i]);
    }

 for (int i = 0; i < a; i++)
    {
       if(t[i]%2!=0)
       
       {
        count++;

       }
       else
       break;
    }






    return 0;
}