#include <stdio.h>

int A[100];
int n;

void display();
void bubbleSort();

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

    printf("\nData Before sorting:\n");
    printf("*********************\n");
    display();

    bubbleSort();

    printf("\n\nData After sorting:\n");
    printf("*********************\n");
    display();

    return 0;
}

void bubbleSort()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

void display()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
}