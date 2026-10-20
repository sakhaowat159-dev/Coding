#include <stdio.h>
int main()
{
    long long int a, t[100000],i,j,count=0;
    scanf("%lld", &a);

    for (int i = 0; i < a; i++)
    {

        scanf("%lld", &t[i]);
    }
    //for (int i = 0; i < a - 1; i++)
   // {

        for (int j = 0; j < a; j+=2)

        {
            if ((t[j] + t[j+1]) % 2 != 0)
            {
                count++;
            }
        }
      //  break;
  //  }
printf("%lld\n",count);
    return 0;
}