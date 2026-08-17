/* TM: equal number of a's and b's, cross off pairs with X */
#include <stdio.h>
#include <string.h>
int main(){
    char tape[100], again = 'y';
    while(again=='y' || again=='Y'){
        printf("Enter string: ");
        scanf("%s", tape);
        int n = strlen(tape), accept = -1;
        while(accept == -1){
            int ai = -1, bi = -1;
            for(int i = 0; i < n; i++){
                if(tape[i]=='a' && ai==-1) ai = i;
                if(tape[i]=='b' && bi==-1) bi = i;
            }
            if(ai==-1 && bi==-1) accept = 1;
            else if(ai==-1 || bi==-1) accept = 0;
            else { tape[ai]='X'; tape[bi]='X'; }
        }
        printf(accept ? "Accepted (equal a's and b's)\n" : "Rejected\n");
        printf("Test another string? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
