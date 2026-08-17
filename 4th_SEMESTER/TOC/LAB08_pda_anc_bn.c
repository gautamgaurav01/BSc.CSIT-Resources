/* PDA: a^n c b^n */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], again = 'y';
    while(again=='y' || again=='Y'){
        printf("Enter string: ");
        scanf("%s", s);
        int n = strlen(s), top = 0, i = 0, ok = 1;
        for(; s[i]=='a'; i++) top++;
        if(s[i]=='c') i++; else ok = 0;
        if(ok){
            for(; s[i]=='b' && top>0; i++) top--;
            printf((i==n && top==0) ? "Accepted (a^n c b^n)\n" : "Rejected\n");
        } else printf("Rejected\n");
        printf("Test another string? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
