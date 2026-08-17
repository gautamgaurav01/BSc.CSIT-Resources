#include<stdio.h>
int sum(int a , int b)
{
	int sum;
	sum=a+b;
	printf("the sum of two numbers = %d \n", sum);
    return sum;

}
void even_odd(int output)
{
	if (output%2==0)
	{
		printf("The sum is even");
	}
	else
	{
		printf("The sum is odd");
	}
}
int main ()
{
	int output, a, b;
	printf("Enter the number:");
	scanf("%d %d" ,&a,&b);
	output= sum(a,b);
	even_odd(output);
	return 0;
}
