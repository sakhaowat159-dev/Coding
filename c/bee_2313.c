
#include <stdio.h>

int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    // ত্রিভুজ হবে না যদি কোনো বাহু বাকি দুইটার যোগফলের সমান বা বড় হয়
    if (a >= b + c || b >= a + c || c >= a + b)
    {
        printf("Invalido\n");
        return 0;
    }

    // ত্রিভুজের ধরন
    if (a == b && b == c)
        printf("Valido-Equilatero\n");
    else if (a == b || b == c || a == c)
        printf("Valido-Isoceles\n");
    else
        printf("Valido-Escaleno\n");

    // সমকোণী কিনা (পিথাগোরাস)
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        printf("Retangulo: S\n");
    else
        printf("Retangulo: N\n");

    return 0;
}
