#include <stdio.h>
int main ()
{
    int martix[3][4],i,j, transpose[4][3];
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("Enter martix[%d][%d]: ",i,j);
            scanf("%d",&martix[i][j]);
        }
    }
    printf("\n printing the elements of the matrix \n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for (j=0;j<4;j++)
        {
            printf("%d \t",martix[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            transpose[j][i] = martix[i][j];
        }
    }
    printf("\n printing the TRANSPOSE MATRIX of the given matrix \n");
    for(i=0;i<4;i++)
    {
        printf("\n");
        for (j=0;j<3;j++)
        {
            printf("%d \t", transpose[i][j]);
        }
    }
return 0;
}

