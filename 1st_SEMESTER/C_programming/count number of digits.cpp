#include <stdio.h>
void count_number_of_digits(long n)
{
    int count = 0;
    do
    {
        n = n/10;
        printf("\n value of n = %d \n", n);
		
        count++;
    }
    while (n != 0);

    printf("Number of digits: %d", count);
}

int main()
{
    long n;
    printf("Enter an integer: ");
    scanf("%ld", &n);
    count_number_of_digits(n);
    return 0;
}

