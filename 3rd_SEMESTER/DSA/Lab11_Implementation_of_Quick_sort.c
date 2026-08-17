#include <stdio.h>

int A[100];
int n;

void display();
void quickSort(int l, int r);
int partition(int l, int r);

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

    quickSort(0, n - 1);

    printf("\n\nDATA AFTER SORTING:\n");
    printf("*********************\n");
    display();

    return 0;
}

void quickSort(int l, int r)
{
    if (l < r)
    {
        int p = partition(l, r);
        quickSort(l, p - 1);
        quickSort(p + 1, r);
    }
}

int partition(int l, int r)
{
    int x = l;
    int y = r;
    int pivot = A[l];

    while (x < y)
    {

        while (A[x] <= pivot)
            x++;

        while (A[y] > pivot)
            y--;

        if (x < y)
        {
            int temp = A[x];
            A[x] = A[y];
            A[y] = temp;
        }
    }

    A[l] = A[y];
    A[y] = pivot;

    return y;
}

void display()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
}