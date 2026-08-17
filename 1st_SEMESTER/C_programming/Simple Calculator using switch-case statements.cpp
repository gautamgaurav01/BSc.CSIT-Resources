#include <stdio.h>
float result; 
float addition(float a, float b)
{
    result = a + b;
    return result;
}
float subtraction(float a, float b)
{
    result = a - b;
    return result;
}
float product(float a, float b)
{
    result = a * b;
    return result;
}
float divison(float a, float b)
{
    if(a == 0)
    {
        printf("\n please enter the value of first input > 0 \n");
        return 0;
    }
    else
    {
        result = a / b;
    }
}
int main()
{
    char op;
    float a, b, output;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    switch (op)
    {
    case '+':
        output = addition(a,b);
        printf("value of sum is: %f", output);
        break;
    case '-':
        output = subtraction(a,b);
        printf("value of sum is: %f", output);
        break;
    case '*':
        output = product(a,b);
        printf("value of sum is: %f", output);
        break;
    case '/':
        output = divison(a,b);
        printf("value of sum is: %f", output);
        break;
    default:
        printf("Error! Incorrect Operator Value\n");
        output = 0;
    }
    return 1;
}


