#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else
    {
        return gcd(b % a, a);
    }
}

int main()
{
    int a = 30, b = 12;
    printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));

    a = 35;
    b = 105;
    printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));

    a = 31;
    b = 2;
    printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));

    return 0;
}
