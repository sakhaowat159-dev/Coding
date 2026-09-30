#include <stdio.h>

int main()
{

    int a, b, c, x = 0;
     char h;
    scanf("%d %d %c %d", &a, &b, &h, &c);
;

    if(h=='+'){
        x=b+c;
    }
    else if(h=='*'){
        x=b*c;
    }
    if(x<=a){
        printf("OK\n");
    }
    else
        printf("OVERFLOW\n");
    

        return 0;
    }
