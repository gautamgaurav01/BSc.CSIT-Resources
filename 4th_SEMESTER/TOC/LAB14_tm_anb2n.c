/* Pure TM: a^n b^{2n} */
#include <stdio.h>
#include <string.h>

int main() {
    char tape[100], again = 'y';
    while (again == 'y' || again == 'Y') {
        printf("Enter string: ");
        scanf("%s", tape);
        int n = strlen(tape); int p = 0;
        while (tape[p] == 'a') p++;
        while (tape[p] == 'b') p++;
        if (p != n) { printf("Rejected\n"); } 
        else {
            int ok = 1; int i = 0;
            while (1) {
                while (tape[i] == 'X' || tape[i] == 'Y') i++;
                if (tape[i] == '\0') break;
                if (tape[i] != 'a') { ok = 0; break; }
                tape[i] = 'X';
                int marked = 0; int j = i + 1;
                while (marked < 2) {
                    while (tape[j] == 'a' || tape[j] == 'X' || tape[j] == 'Y') j++;
                    if (tape[j] != 'b') { ok = 0; break; }
                    tape[j] = 'Y';
                    marked++;
                    j++;
                }
                if (!ok) break;
            }
            int leftover = 0;
            for (int k = 0; tape[k]; k++)
                if (tape[k] == 'a' || tape[k] == 'b') leftover++;
            printf((ok && leftover == 0) ? "Accepted (a^n b^{2n})\n" : "Rejected\n");
        }
        printf("Test another string? (y/n): ");
        scanf(" %c", &again);
    }
    return 0;
}