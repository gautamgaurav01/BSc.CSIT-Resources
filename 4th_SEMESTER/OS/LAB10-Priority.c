
// Priortiy Scheduling
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int bt[n], pr[n], wt[n], tat[n], ct[n], p[n];

    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;

        printf("\nProcess P%d\n", i + 1);

        printf("Burst Time: ");
        scanf("%d", &bt[i]);

        printf("Priority: ");
        scanf("%d", &pr[i]);
    }

    // Sort according to priority
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (pr[i] > pr[j])
            {
                int temp;

                temp = pr[i];
                pr[i] = pr[j];
                pr[j] = temp;

                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    ct[0] = bt[0];

    for (int i = 1; i < n; i++)
    {
        ct[i] = ct[i - 1] + bt[i];
    }

    float avgwt = 0, avgtat = 0;

    printf("\n-----------------------------------------------------------\n");
    printf("Process\tPriority\tBT\tCT\tTAT\tWT\n");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        tat[i] = ct[i];
        wt[i] = tat[i] - bt[i];

        avgwt += wt[i];
        avgtat += tat[i];

        printf("P%d\t%d\t\t%d\t%d\t%d\t%d\n",
               p[i], pr[i], bt[i], ct[i], tat[i], wt[i]);
    }

    avgwt /= n;
    avgtat /= n;

    printf("-----------------------------------------------------------\n");
    printf("Average Waiting Time = %.2f\n", avgwt);
    printf("Average Turnaround Time = %.2f\n", avgtat);

    return 0;
}