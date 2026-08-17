#include<stdio.h>
int main()
{
    float marks[5];
    int i, num;

    printf("enter the size of the array: ");
    scanf("%d", &num);

    printf("enter the values of the array: \n");

    for(i = 0; i < num; i++)
    {
        scanf("%f", &marks[i]);
    }

    printf("Entered values of array: \n");

    for(i = 0; i < num ; i++)
    {
        printf("marks[%d] = %f \n", i, marks[i]);
    }
    return 0;
}
