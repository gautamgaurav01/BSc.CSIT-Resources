#include <stdio.h>
int main()
{
    int pages[100], frames[100];
    int n, f;
    int i, j;
    int pageFaults = 0, pageHits = 0;
    int index = 0;
    int found;

    printf("Enter the number of pages");
    scanf("%d", &n);

    printf("Enter the pages reference string:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &pages[i]);
    }

    printf("Enter the number of frames:");
    scanf("%d", &f);

    for (i = 0; i < f; i++)
    {
        frames[i] = -1;
    }

    printf("\n FIFO Page Replacement\n");
    printf("---------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        found = 0;
        for (j = 0; j < f; j++)
        {
            if (frames[j] == pages[i])
            {
                found = i;
                pageHits++;
                break;
            }
        }

        if (!found)
        {
            frames[index] = pages[i];
            index = (index + 1) % f;
            pageFaults++;
        }

        printf("Page %d -> ", pages[i]);
        for (j = 0; j < f; j++)
        {
            if (frames[j] == -1)
            {
                printf("-");
            }
            else
            {
                printf("%d", frames[j]);
            }
        }
        if (found)
        {
            printf("Hit");
        }
        else
        {
            printf("Fault");
        }
        printf("\n");
    }

    printf("----------------------------------\n");
    printf("Total Page Faults = %d\n", pageFaults);
    printf("Total Page Hits   = %d\n", pageHits);
    printf("Hit Ratio         = %.2f\n", (float)pageHits / n);
    printf("Fault Ratio       = %.2f\n", (float)pageFaults / n);

    return 0;
}