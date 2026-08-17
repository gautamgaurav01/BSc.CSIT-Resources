#include<stdio.h>
#include<conio.h>
#include<math.h>

void main() {
    float val, fVal, cVal;
    
    printf("Enter a float value: ");
    scanf("%f", &val);
    
    fVal = floor(val);
    cVal = ceil(val);
    
    printf("Floor value: %f\nCeil value: %f", fVal, cVal);
    getch();
}