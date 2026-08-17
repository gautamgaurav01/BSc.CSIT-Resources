/* DFA: valid C identifier (letter|_)(letter|digit|_)* */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[100], again = 'y';
    while(again=='y' || again=='Y'){
        printf("Enter string: ");
        scanf("%s", s);
        int n = strlen(s);
        int valid = n > 0 && (isalpha((unsigned char)s[0]) || s[0]=='_');
        for(int i = 1; i < n && valid; i++)
            if(!(isalnum((unsigned char)s[i]) || s[i]=='_')) valid = 0;
        printf(valid ? "Valid Identifier\n" : "Invalid Identifier\n");
        printf("Test another string? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
