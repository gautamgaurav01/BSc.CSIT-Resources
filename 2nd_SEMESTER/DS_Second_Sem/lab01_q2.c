#include<stdio.h>
#include<conio.h>

void main() {
    int a[10], b[10], i, j;
    
    
    printf("Enter elements in set A (5 elements): ");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    
    printf("Enter elements in set B (5 elements): ");
    for(j = 0; j < 5; j++)
        scanf("%d", &b[j]);
    
    printf("\nCartesian Product:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("(%d, %d) ", a[i], b[j]);
        }
        printf("\n");
    }
    getch();

    
}