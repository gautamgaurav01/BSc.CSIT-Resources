#include<stdio.h>
int calculateHCF(int num1, int num2) {
    int hcf = 1;
    for (int i = 1; i <= num1 && i <= num2; i++) 
	{
        if (num1 % i == 0 && num2 % i == 0) 
		{
            hcf = i;
        }
    }
    return hcf;
}
int calculateLCM(int num1, int num2, int hcf) 
{
    return (num1 * num2) / hcf;
}
int main() 
{
    int num1, num2, hcf, lcm;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    hcf = calculateHCF(num1, num2);
    lcm = calculateLCM(num1, num2, hcf);
    printf("HCF = %d and LCM = %d\n", hcf, lcm);
    return 0;
} 

