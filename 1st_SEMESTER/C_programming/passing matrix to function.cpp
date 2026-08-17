#include <stdio.h>
void row_sum_of_matrix(int matrix[3][3])
{
    int rowSum, i, j;

    for(int i=0; i<3; i++)
    {
        rowSum = 0;
        for(int j=0; j<3; j++)
        {
            rowSum = rowSum + matrix[i][j] ;
        }
        printf( " \n Sum of the elements in row %d is %d \n ", i, rowSum);
    }
}
void column_sum_of_matrix(int matrix[3][3])
{
    int columnSum, i, j;

    for(int i=0; i<3; i++)
    {
        columnSum = 0;
        for(int j=0; j<3; j++)
        {
            columnSum = columnSum + matrix[j][i] ;
        }
        printf( " \n Sum of the elements in column %d is %d \n ", i, columnSum);
    }
}
void main_diagonal_sum_of_matrix(int matrix[3][3])
{
    int main_diagonal_Sum = 0, i, j;

    for(int i=0; i<3; i++)
    {
        main_diagonal_Sum = main_diagonal_Sum + matrix[i][i];
    }
    printf("\nMain diagonal elements sum is = %d \n", main_diagonal_Sum);
}
int main ()
{
    int matrix[3][3],i,j, sum = 0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Enter matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n printing the elements of the matrix \n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for (j=0;j<3;j++)
        {
            printf("%d \t",matrix[i][j]);
        }
    }
    row_sum_of_matrix( matrix);
    column_sum_of_matrix( matrix);
    main_diagonal_sum_of_matrix( matrix);
    return 0;
}

