#include<stdio.h>
#include<string.h>

struct student {
    char name[50];
    int rollNo;
    char gender[10];
};

void sortByGender(struct student s[], int n) 
{
    int M = 0, F = 0;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(s[i].gender, "M") == 0) 
        {
            M++;
        }
        else if (strcmp(s[i].gender, "F") == 0)
        {
            F++;
        }
    }
    printf("\nNumber of males: %d", M);
    printf("\nNumber of females: %d\n", F);
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);  // No space needed before %s
        printf("Roll No.: ");
        scanf("%d", &s[i].rollNo);
        printf("Gender (M/F): ");
        scanf("%s", s[i].gender);
    }

    sortByGender(s, n);

    return 0;
}

