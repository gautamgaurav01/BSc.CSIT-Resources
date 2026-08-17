/* TM: storage in state, accepts ab* + ba* */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], again = 'y';
    while(again=='y' || again=='Y'){
        printf("Enter string: ");
        scanf("%s", s);
        int n = strlen(s);
        if(n == 0) printf("Rejected\n");
        else {
            char store = s[0];
            int ok = (store=='a' || store=='b');
            char expect = (store=='a') ? 'b' : 'a';
            for(int i = 1; i < n && ok; i++)
                if(s[i] != expect) ok = 0;
            printf(ok ? "Accepted (ab* + ba*)\n" : "Rejected\n");
        }
        printf("Test another string? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}
