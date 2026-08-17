#include <stdio.h>
void opposite_diagonal_sum_of_matrix(int matrix[3][3]) {
    int opposite_diagonal_sum = 0, i;
    for (i = 0; i < 3; i++) {
        opposite_diagonal_sum = opposite_diagonal_sum +matrix[i][2 - i];
    }
    printf("\nOpposite diagonal sum: %d\n", opposite_diagonal_sum);
}
int main() {
    int matrix[3][3], i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nPrinting the elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%d \t", matrix[i][j]);
        }
    }
    opposite_diagonal_sum_of_matrix(matrix);
    return 0;
}

