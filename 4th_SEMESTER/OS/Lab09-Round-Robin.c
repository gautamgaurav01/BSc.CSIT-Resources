#include<stdio.h>

int main()
{
    int n, tq;
    int bt[20], rem_bt[20];
    int wt[20], tat[20], ct[20];
    int time = 0;
    int completed = 0;

    float avg_wt = 0, avg_tat = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter Burst Time of P%d: ", i + 1);
        scanf("%d", &bt[i]);

        rem_bt[i] = bt[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &tq);

    while(completed < n)
    {
        for(int i = 0; i < n; i++)
        {
            if(rem_bt[i] > 0)
            {
                if(rem_bt[i] > tq)
                {
                    time += tq;
                    rem_bt[i] -= tq;
                }
                else
                {
                    time += rem_bt[i];
                    rem_bt[i] = 0;

                    ct[i] = time;
                    tat[i] = ct[i];      // AT = 0
                    wt[i] = tat[i] - bt[i];

                    completed++;
                }
            }
        }
    }

    printf("\n---------------------------------------------\n");
    printf("Process\tBT\tCT\tTAT\tWT\n");
    printf("---------------------------------------------\n");

    for(int i = 0; i < n; i++)
    {
        avg_wt += wt[i];
        avg_tat += tat[i];

        printf("P%d\t%d\t%d\t%d\t%d\n",
               i + 1, bt[i], ct[i], tat[i], wt[i]);
    }

    avg_wt /= n;
    avg_tat /= n;

    printf("---------------------------------------------\n");
    printf("Average Waiting Time = %.2f\n", avg_wt);
    printf("Average Turnaround Time = %.2f\n", avg_tat);

    return 0;
}