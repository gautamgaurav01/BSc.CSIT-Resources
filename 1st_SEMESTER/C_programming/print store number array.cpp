#include<stdio.h>
void sorted_array(int marks[5])
{
    int i,j,temp;
     for(i = 0; i<5; i++)
    {
        for(j = i+1; j<5; j++)
        { 
            if(marks[j] > marks[i])
            {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
    printf("Printing Sorted Element List ...\n");
    for(i = 0; i<5; i++)
    {
        printf("%d\n",marks[i]);
    }
}
int main()
{
    int marks[5];
    int i;
    printf("Enter 5 marks: \n");

    for(i = 0; i <5;i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("Entered 5 marks of array: \n");
    for(i = 0; i <5;i++)
    {
        printf("marks[%d] = %d \n", i, marks[i]);
    }
    sorted_array(marks);
    return 0;
}
