/*
SRTN (Shortest Remaining Time Next) Scheduling Algorithm and 
SRTF (Shortest Remaining Time First) Scheduling Algorithm are same.
It is a preemptive scheduling algorithm.
*/
#include<stdio.h>
#include<limits.h>

int main()
{
    int n,i,time=0,completed=0;
    int at[20], bt[20], rt[20];
    int ct[20], wt[20], tat[20];
    printf("Enter number of processes:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
       printf("Arrival Time of P%d:", i+1);
       scanf("%d",&at[i]);

       printf("Brust Time of P%d:", i+1);
       scanf("%d",&bt[i]);

       rt[i]=bt[i];
    }

    while(completed != n)
    {
        int shortest = -1;
        int min = INT_MAX;

        for(i=0; i<n; i++)
        {
            if(at[i] <= time && rt[i]>0 && rt[i]<min)
            {
                min = rt[i];
                shortest = i;
            }
        }

        if(shortest == -1)
        {
            time++;
            continue;
        }

        rt[shortest]--;
        time++;

        if(rt[shortest] == 0)
        {
            completed++;
            ct[shortest]=time;
            tat[shortest]=ct[shortest]-at[shortest];
            wt[shortest]=tat[shortest]-bt[shortest];
        }
    }

    float avgWT=0, avgTAT=0;
    printf("\nProcess\tAT\tBT\tCT\tTAT\tWT\n");

    for(i=0; i<n; i++)
    {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               i+1,
               at[i],
               bt[i],
               ct[i],
               tat[i],
               wt[i]);
        avgWT+=wt[i];
        avgTAT+=tat[i];
    }

    printf("\nAverage Waiting Time = %.2f",avgWT / n);

    printf("\nAverage Trunaround Time = %.2f\n",avgTAT/n);

    return 0;
}