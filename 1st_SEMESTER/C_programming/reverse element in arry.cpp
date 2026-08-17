#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i;
	printf("Enter elements of an arry:\n");
	for (i=0;i<5;i++)
	{
		scanf("%d" ,&a[i]);
	}
    printf("Array elements in reverse order are:\n");
	for (i=4;i>=0;i--)
	{
	printf("%d\n", a[i]);	
	}
	return 0;
}
