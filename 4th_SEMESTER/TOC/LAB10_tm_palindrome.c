/* TM: palindrome, mark-and-compare inward with X */
#include <stdio.h>
#include <string.h>
int main(){
    char tape[100], again = 'y';
    while(again=='y' || again=='Y'){
        printf("Enter string: ");
        scanf("%s", tape);
        int n = strlen(tape), l = 0, r = n-1, accept = 1;
        while(l < r){
            if(tape[l]=='X'){ l++; continue; }
            if(tape[r]=='X'){ r--; continue; }
            if(tape[l] != tape[r]) { accept = 0; break; }
            tape[l] = 'X'; tape[r] = 'X';
            l++; r--;
        }
        printf(accept ? "Accepted (Palindrome)\n" : "Rejected\n");
        printf("Test another string? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
