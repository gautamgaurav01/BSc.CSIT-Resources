#include <stdio.h>
#include <string.h>
struct account {
    char name[50];
    int accountno;
    int balance;
};
void sortBybalance(struct account a[], int n) {
    struct account temp;
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = i + 1; j < n; j++) 
		{
            if (a[i].balance > a[j].balance) 
			{
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main() {
    int n;
    printf("Enter number of accounts: ");
    scanf("%d", &n);
    struct account a[n];
    for (int i = 0; i < n; i++) 
	{
        printf("\nEnter details for account %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", a[i].name);
        printf("Account Number: ");
        scanf("%d", &a[i].accountno);
        printf("Balance: ");
        scanf("%d", &a[i].balance);
    }
    sortBybalance(a, n);
    printf("\nAccounts:\n");
    printf("%s\t%s\t%s\n", "Name", "Account", "Balance");
    for (int i = 0; i < n; i++) 
	{ 
        printf("%s\t%d\t%d\n", a[i].name, a[i].accountno, a[i].balance);
    }
    return 0; 
}
