#include<stdio.h>

void main() {
    int m, n, p, q, i, j;
    int first[5][5], second[5][5], join[5][5];
    
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &m, &n);
    
    printf("Enter elements (0/1):\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &first[i][j]);
    
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &p, &q);
    
    printf("Enter elements (0/1):\n");
    for(i = 0; i < p; i++)
        for(j = 0; j < q; j++)
            scanf("%d", &second[i][j]);
    
    for(i = 0; i < m; i++)
        for(j = 0; j < q; j++)
            join[i][j] = first[i][j] || second[i][j];
    
    printf("Boolean Join:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++)
            printf("%d\t", join[i][j]);
        printf("\n");
    }
    getch();
}