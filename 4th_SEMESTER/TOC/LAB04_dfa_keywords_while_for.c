/* DFA: accepts "while" or "for" */
#include <stdio.h>
#include <string.h>
int main(){
    char s[20], again = 'y';
    while(again=='y' || again=='Y'){
        printf("Enter string: ");
        scanf("%s", s);
        int n = strlen(s);
        const char *w = "while", *f = "for";
        int okw = (n == 5);
        for(int i = 0; okw && i < 5; i++) if(s[i] != w[i]) okw = 0;
        int okf = (n == 3);
        for(int i = 0; okf && i < 3; i++) if(s[i] != f[i]) okf = 0;
        printf((okw || okf) ? "Accepted\n" : "Rejected\n");
        printf("Test another string? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
