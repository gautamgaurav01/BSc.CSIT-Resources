#include<stdio.h>
#include<string.h>

void main() {
    char truthtable[9][8][20];
    int i;
    
    // Header row
    strcpy(truthtable[0][0], "P");
    strcpy(truthtable[0][1], "Q");
    strcpy(truthtable[0][2], "R");
    strcpy(truthtable[0][3], "P=>Q");
    strcpy(truthtable[0][4], "Q=>R");
    strcpy(truthtable[0][5], "(P=>Q)^(Q=>R)");
    strcpy(truthtable[0][6], "Q^R");
    strcpy(truthtable[0][7], "Final");
    
    // Truth values
    for(i = 1; i <= 8; i++) {
        // P column
        strcpy(truthtable[i][0], (i <= 4) ? "T" : "F");
        
        // Q column
        if(i == 1 || i == 2 || i == 5 || i == 6)
            strcpy(truthtable[i][1], "T");
        else
            strcpy(truthtable[i][1], "F");
            
        // R column
        if(i == 1 || i == 3 || i == 5 || i == 7)
            strcpy(truthtable[i][2], "T");
        else
            strcpy(truthtable[i][2], "F");
    }
    
    // Print truth table
    printf("Truth Table for (P->Q)^(Q->R) <=> (Q^R)\n");
    for(i = 0; i < 9; i++) {
        for(int j = 0; j < 8; j++) {
            printf("%-15s", truthtable[i][j]);
        }
        printf("\n");
    }
    getch();
}