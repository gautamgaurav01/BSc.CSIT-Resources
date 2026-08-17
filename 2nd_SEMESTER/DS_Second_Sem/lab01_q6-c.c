#include<stdio.h>

void main() {
    int m, n, p, q, i, j, k, sum;
    int first[5][5], second[5][5], product[5][5];
    
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &m, &n);
    
    printf("Enter elements (0/1):\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &first[i][j]);
    
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &p, &q);
    
    if(n != p)
        printf("Cannot multiply these matrices");
    else {
        printf("Enter elements (0/1):\n");
        for(i = 0; i < p; i++)
            for(j = 0; j < q; j++)
                scanf("%d", &second[i][j]);
        
        for(i = 0; i < m; i++) {
            for(j = 0; j < q; j++) {
                sum = 0;
                for(k = 0; k < p; k++)
                    sum = sum || (first[i][k] && second[k][j]);
                product[i][j] = sum;
            }
        }
        
        printf("Boolean Product:\n");
        for(i = 0; i < m; i++) {
            for(j = 0; j < q; j++)
                printf("%d\t", product[i][j]);
            printf("\n");
        }
    }
    getch();
}