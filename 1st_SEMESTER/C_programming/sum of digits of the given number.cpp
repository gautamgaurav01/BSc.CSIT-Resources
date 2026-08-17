#include <stdio.h>
void sum_of_digits(long n)
{
    int sum = 0, remainder = 1;
    do
    {
        remainder = n % 10; 
        n = n/10;
        sum = sum + remainder;

    }
    while (n != 0);
    printf("Sum of digits = %d", sum);
}

int main()
{
    long n;
    printf("Enter an integer: ");
    scanf("%ld", &n);
    sum_of_digits(n);
    return 0;
}

