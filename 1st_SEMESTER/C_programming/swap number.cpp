#include<stdio.h>
int calculateswap(int first, int second) 
{
	int temp;
	temp = first;
    first = second;
    second = temp;
    printf("\n After swapping, first = %d \n", first);
    printf("After swapping, second = %d", second);
}
int main()
{
    int first, second, temp, swap;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    printf("\n first = %d and second = %d \n", first, second);
    calculateswap(first, second);
    return 0;
}

