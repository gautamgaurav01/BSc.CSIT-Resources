#include <stdio.h>
int main ()
{
    int matrix1[2][3], matrix2[2][3], isEqual = 0, i,j;
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
            if(matrix1[i][j] != matrix2[i][j])
            {
                isEqual = 1;
                break;
            }
        }
    }
    if(isEqual == 1)
    {
        printf("\n two matrices are NOT EQUAL \n");
    }
    else
    {
            printf("\n two matrices are EQUAL \n");
    }
return 0;
}

