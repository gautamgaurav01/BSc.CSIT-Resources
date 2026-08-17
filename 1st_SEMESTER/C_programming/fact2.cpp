#include<stdio.h>
int factorial(int num) 
{
    int i,fact;
    fact = 1;
    for (i = 1; i <= num; i++) 
	{
        fact = fact * i;
    }
    printf("Factorial is %d", fact);
    return 0;
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    factorial(num);
    return 0;
}

