#include <stdio.h>
int main ()
{
    int matrix1[2][3], matrix2[2][3], sum[2][3], i,j;
    printf("\n enter the elements of the matrix1 \n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Enter matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\n enter the elements of the matrix2 \n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Enter matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\n printing the elements of the sum matrix \n");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for (j=0;j<3;j++)
        {
            printf("%d \t",sum[i][j]);
        }
    }
return 0;
}

