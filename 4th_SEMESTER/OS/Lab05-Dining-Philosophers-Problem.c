#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void one();
void two();
int tph, philname[20], status[20], howhung, hu[20], cho;

void main()
{
    int i;
    printf("\n\n Dining philosopher problem");
    printf("\nEnter the total no. of philosophers: ");
    scanf("%d",&tph);
    for(i=0;i<tph;i++)
    {
        philname[i]=(i+1);
        status[i]=1;
    }
    printf("How many are hungry : ");
    scanf("%d", &howhung);
    if(howhung==tph)
    {
        printf("\n All are hungry..\n Dead lock stage will occur");
        printf("\nExiting\n");
    }
    else{
        for(i=0;i<howhung;i++)
        {
            printf("Enter philosopher %d position:",(i+1));
            scanf("%d",&hu[i]);
            status[hu[i]]=2;
        }
        do
        {
            printf("1.One can eat at a time\t2.Two can eat at a time \t3.Exit\n Enter your choice:");
            scanf("%d", &cho);
            switch(cho)
            {
                case 1:
                    one();
                    break;
                case 2:
                    two();
                    break;
                case 3:
                    exit(0);
                default:
                    printf("\nInvalid option..");
            }
        }while(1);
    }
}

void one()
{
    int pos=0, x, i;
    printf("\nAllow one philosopher to eat at any time\n");
    for(i=0;i<howhung;i++, pos++)
    {
        printf("\nP %d is granted to eat", philname[hu[pos]]);
        for(x=pos+1;x<howhung;x++)
            printf("\nP %d is waiting", philname[hu[x]]);
    }
}

void two()
{
    int i, j, s=0, t, r, x;
    printf("\n Allow two philosophers to eat at same time\n");
    for(i=0;i<howhung;i++)
    {
        for(j=i+1;j<howhung;j++)
        {
            if(abs(hu[i]-hu[j])>=1&& abs(hu[i]-hu[j])!=4)
            {
                printf("\n\ncombination %d \n", (s+1));
                t=hu[i];
                r=hu[j]; s++;
                printf("\nP %d and P %d are granted to eat", philname[hu[i]], philname[hu[j]]);
                for(x=0;x<howhung;x++)
                {
                    if((hu[x]!=t)&&(hu[x]!=r))
                        printf("\nP %d is waiting", philname[hu[x]]);
                }
            }
        }
    }
}