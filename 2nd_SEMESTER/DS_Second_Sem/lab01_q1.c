#include <stdio.h>
#include <conio.h>
#define MAX 30

void create(int set[]);
void Union(int set1[], int set2[], int set3[]);
void intersection(int set1[], int set2[], int set3[]);
void difference(int set1[], int set2[], int set3[]);
int member(int set[], int x);
void print(int set[]);

void main()
{
    int set1[MAX], set2[MAX], set3[MAX];
    set1[0] = set2[0] = set3[0] = 0;

    printf("\nCreating First Set*******");
    create(set1);
    printf("\nCreating Second Set*****");
    create(set2);

    // Union operation
    Union(set1, set2, set3);
    printf("\nUnion: ");
    print(set3);

    // Intersection operation
    intersection(set1, set2, set3);
    printf("\nIntersection: ");
    print(set3);

    // Difference operation
    difference(set1, set2, set3);
    printf("\nDifference: ");
    print(set3);
}

void create(int set[])
{
    int n, i;
    set[0] = 0; // Initialize as empty set
    printf("\nNo. of elements in the set: ");
    scanf("%d", &n);
    printf("Enter set elements: ");
    for (i = 1; i <= n; i++)
        scanf("%d", &set[i]);
    set[0] = n; // Store count in set[0]
}

void Union(int set1[], int set2[], int set3[])
{
    int i, n;
    set3[0] = 0;
    n = set1[0];
    for (i = 0; i <= n; i++)
        set3[i] = set1[i];

    n = set2[0];
    for (i = 1; i <= n; i++)
        if (!member(set3, set2[i]))
            set3[++set3[0]] = set2[i];
}

void intersection(int set1[], int set2[], int set3[])
{
    int i, n;
    set3[0] = 0;
    n = set1[0];
    for (i = 1; i <= n; i++)
        if (member(set2, set1[i]))
            set3[++set3[0]] = set1[i];
}

void difference(int set1[], int set2[], int set3[])
{
    int i, n;
    set3[0] = 0;
    n = set1[0];
    for (i = 1; i <= n; i++)
        if (!member(set2, set1[i]))
            set3[++set3[0]] = set1[i];
}

int member(int set[], int x)
{
    int i, n;
    n = set[0];
    for (i = 1; i <= n; i++)
        if (x == set[i])
            return 1;
    return 0;
}

void print(int set[])
{
    int i, n;
    n = set[0];
    for (i = 1; i <= n; i++)
        printf("%d ", set[i]);
}