/* DFA: starts with "ab" and ends with "b" */
#include <stdio.h>
int main(){
    char s[100], again = 'y';
    while(again=='y' || again=='Y'){
        printf("Enter string (a,b only): ");
        scanf("%s", s);
        int state = 0;
        for(int i = 0; s[i]; i++){
            char c = s[i];
            switch(state){
                case 0: state = (c=='a') ? 1 : 4; break;
                case 1: state = (c=='b') ? 2 : 4; break;
                case 2: state = (c=='b') ? 2 : 3; break;
                case 3: state = (c=='b') ? 2 : 3; break;
                case 4: state = 4; break;
            }
        }
        printf(state == 2 ? "Accepted\n" : "Rejected\n");
        printf("Test another string? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
