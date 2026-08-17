#include <stdio.h>

int A[100];
int n;

void display();
void insertionSort();

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

    insertionSort();

    printf("\n\nDATA AFTER SORTING:\n");
    printf("*********************\n");
    display();

    return 0;
}

void insertionSort()
{
    int key, j;

    for (int i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = key;
    }
}

void display()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
}