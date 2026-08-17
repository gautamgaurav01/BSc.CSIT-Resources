#include <stdio.h>
void sum_of_natural_numbers(int num)
{
    int i, sum = 0;

    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);
}
int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    sum_of_natural_numbers(num);

    return 0;
}

