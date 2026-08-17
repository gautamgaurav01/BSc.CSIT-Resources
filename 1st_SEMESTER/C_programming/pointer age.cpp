#include<stdio.h>
#include<string.h>
int main ()
{
	int myAge =19;
	int *ptr= &myAge;
	printf("%d\n", myAge); 
	printf("%p\n", &myAge); 
	printf("%p\n", ptr); 
	printf("%d\n", *ptr); 
}
