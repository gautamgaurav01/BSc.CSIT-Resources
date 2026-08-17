#include <stdio.h>
int main ()
{
    int matrix[2][3],i,j, sum = 0;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Enter matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n calculating the sum of all the elements of the matrix \n");

    for(i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            sum = sum + matrix[i][j];
        }
    }
    printf("sum = %d", sum);
return 0;
}

