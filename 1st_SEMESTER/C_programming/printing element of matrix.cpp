#include <stdio.h>
int main ()
{
    int matrix[3][4],i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("Enter matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n printing the elements of the matrix \n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for (j=0;j<4;j++)
        {
            printf("%d \t",matrix[i][j]);
        }
    }
return 0;
}

