
#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);
    while (x--)
    {

        int p, q, r, s;
        scanf("%d %d %d %d", &p, &q, &r, &s);
        int s1 = (p + q + r) < s;//56//4
        int s2 = (p + q + s) < r;//54////6
        int s3 = (p + s + r) < q;//40////20
        int s4 = (s + q + r) < p;//30////30

        if (s1 || s2 || s3 || s4)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
