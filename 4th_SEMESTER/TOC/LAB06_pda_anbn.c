/* PDA: a^n b^n */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], again = 'y';
    while(again=='y' || again=='Y'){
        printf("Enter string: ");
        scanf("%s", s);
        int n = strlen(s), top = -1, i = 0;
        for(; s[i]=='a'; i++) top++;
        for(; s[i]=='b' && top>=0; i++) top--;
        printf((i==n && top==-1) ? "Accepted (a^n b^n)\n" : "Rejected\n");
        printf("Test another string? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
