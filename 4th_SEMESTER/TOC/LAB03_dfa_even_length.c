/* DFA: even length strings */
#include <stdio.h>
int main(){
    char s[1000], again = 'y';
    while(again=='y' || again=='Y'){
        printf("Enter string: ");
        scanf("%s", s);
        int state = 0;
        for(int i = 0; s[i]; i++) state = 1 - state;
        printf(state == 0 ? "Accepted (even length)\n" : "Rejected\n");
        printf("Test another string? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
