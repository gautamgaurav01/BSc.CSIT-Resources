#include<stdio.h>
void factorial() 
{
    int num,i,fact;
    fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for (i = 1; i<=num; i++)
	{
    fact = fact * i;
    }
    printf("Factorial is %d", fact); 
}
int main()
{
    factorial();
    return 0;
}
