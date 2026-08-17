#include<stdio.h>
#include<string.h>

struct student {
	char name[50];
	char gender[10];
	int rollNo;
	char address[100];
};
void sortByRollNo(struct student s[], int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = i + 1; j < n; j++) 
		{
            if (s[i].rollNo > s[j].rollNo) 
			{
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
} 
int main()
{
	int n;
	printf("Enter number of students:");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
    	printf("\nEnter details for student %d:\n", i + 1);
        printf("Name:");
        scanf(" %s", s[i].name);
        printf("Roll NO.: ");
        scanf(" %d", &s[i].rollNo);
        printf("Gender: ");
        scanf(" %s", &s[i].gender);
        printf("Address: ");
        scanf(" %s", &s[i].address);
	}
	sortByRollNo(s, n);
	printf("\nStudents:\n");
    printf("%s\t%s\t%s\t%s\n","Roll No.", "Name",  "Gender", "Address");
    for (int i = 0; i < n; i++) 
	{
        printf("%d\t\t%s\t%s\t%s\n", s[i].rollNo, s[i].name, s[i].gender, s[i].address);
    }
    return 0;
}
