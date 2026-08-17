#include <stdio.h>

int A[100];
int n, n1;

void display();
void heapSort();
void MAX_HEAP_BUILD();
void heapify(int i);

int main()
{

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    n1 = n;

    printf("Enter Elements of array:\n");

    for (int i = 1; i <= n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDATA BEFORE SORTING:\n");
    printf("*********************\n");
    display();

    heapSort();

    printf("\n\nDATA AFTER SORTING:\n");
    printf("*********************\n");
    display();

    return 0;
}

void heapSort()
{
    MAX_HEAP_BUILD();

    for (int i = n1; i >= 2; i--)
    {
        int temp = A[1];
        A[1] = A[n1];
        A[n1] = temp;

        n1--;
        heapify(1);
    }
}

void MAX_HEAP_BUILD()
{
    for (int i = n1 / 2; i >= 1; i--)
    {
        heapify(i);
    }
}

void heapify(int i)
{
    int l = 2 * i;
    int r = 2 * i + 1;
    int largest = i;

    if (l <= n1 && A[l] > A[largest])
        largest = l;

    if (r <= n1 && A[r] > A[largest])
        largest = r;

    if (largest != i)
    {
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;

        heapify(largest);
    }
}

void display()
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", A[i]);
    }
}