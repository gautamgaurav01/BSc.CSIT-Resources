#include <stdio.h>

int A[100];
int n;

void display();
void selectionSort();

int main()
{

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter Elements of array:\n");

    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDATA BEFORE SORTING:\n");
    printf("*********************\n");
    display();

    selectionSort();

    printf("\n\nDATA AFTER SORTING:\n");
    printf("*********************\n");
    display();

    return 0;
}

void selectionSort()
{
    for (int i = 0; i < n - 1; i++)
    {
        int least = A[i];
        int loc = i;

        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < least)
            {
                least = A[j];
                loc = j;
            }
        }

        A[loc] = A[i];
        A[i] = least;
    }
}

void display()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
}