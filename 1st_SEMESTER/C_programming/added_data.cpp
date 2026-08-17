#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, added_data, temp = 0;
    int *data;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    data = (int *)calloc(n, sizeof(int));  

    if (data == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", data + i);
    }
    printf("Enter number of elements to add: ");
    scanf("%d", &added_data);
    temp = n;
    if(added_data > 0)
    {
        data = realloc(data, (n+added_data) * sizeof(int));
        for (i=0; i < added_data; i++)
        {
            printf("Enter number %d: ", i + 1);
            scanf("%d", data + n);
            n++;
        }
    }
    int new_length = temp + added_data;
    printf("\n new length of array: %d", new_length);
    printf("\n");
    for(i=0;i<new_length;i++)
    {
        printf("%d\n", data[i]);
    }
    free(data);
    return 0;
}
