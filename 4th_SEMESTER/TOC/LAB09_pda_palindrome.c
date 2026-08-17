/* PDA: even/odd length palindromes over {a,b} */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], stack[100], again = 'y';
    while(again=='y' || again=='Y'){
        printf("Enter string: ");
        scanf("%s", s);
        int n = strlen(s), top = -1, mid = n/2, i;
        for(i = 0; i < mid; i++) stack[++top] = s[i];
        i = (n % 2 == 0) ? mid : mid + 1;
        int ok = 1;
        for(; i < n; i++){
            if(top < 0 || stack[top] != s[i]) { ok = 0; break; }
            top--;
        }
        printf((ok && top==-1) ? "Accepted (Palindrome)\n" : "Rejected\n");
        printf("Test another string? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
