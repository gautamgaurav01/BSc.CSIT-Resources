/* PDA: a^n b^2n */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], again = 'y';
    while(again=='y' || again=='Y'){
        printf("Enter string: ");
        scanf("%s", s);
        int n = strlen(s), stack = 0, i = 0;
        for(; s[i]=='a'; i++) stack += 2;
        for(; s[i]=='b' && stack>0; i++) stack--;
        printf((i==n && stack==0) ? "Accepted (a^n b^2n)\n" : "Rejected\n");
        printf("Test another string? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
