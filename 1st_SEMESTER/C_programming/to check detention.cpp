#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    char gender;
    float percentage;
};
int main() 
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", s[i].name);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Gender (M/F): ");
        scanf(" %c", &s[i].gender);
        printf("Percentage: ");
        scanf("%f", &s[i].percentage);
    }
    printf("\nStudents with distinction:\n");
     printf("%s%s %s %s\n", "Name", "Age", "Gender", "Percentage");
    for (int i = 0; i < n; i++) 
    {
        if (s[i].percentage >= 80) 
        {
            printf("%s %d %c %f\n", 
                   s[i].name, s[i].age, s[i].gender, s[i].percentage);
        }
    }
    return 0;
}

