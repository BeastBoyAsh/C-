#include<stdio.h>
void main()
{
    int p[10],bt[10],su[10],wt[10],tat[10],i,k,n,temp;
    float awt,atat;
    printf("enter the no of processes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p[i]=i;
        printf("enter the burst time of processes %d",i);
        scanf("%d",&bt[i]);
        printf("system/user process(0/1)?");
        scanf("%d",&su[i]);
    }
    for(i=0;i<n;i++)
    {
        for(k=i+1;k<n;k++)
        {
            if(su[i]>su[k])
            {
                temp=p[i];
                p[i]=p[k];
                p[k]=temp;
                temp=bt[i];
                bt[i]=bt[k];
                bt[k]=temp;
                temp=su[i];
                su[i]=su[k];
                su[k]=temp;
            }
        }
    }
    awt=wt[0]=0;
    atat=tat[0]=bt[0];
    for(i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=tat[i-1]+bt[i];
        awt=awt+wt[i];
        atat=atat +tat[i];
    }
    printf("\n PROCESS \t\t SYSTEM/USER PROCESS \t BURST TIME\t WAITING TIME \t TURNAROUND TIME ");
    for(i=0;i<n;i++)
    {
        printf("\n%d \t\t %d \t\t %d \t\t %d \t\t %d",p[i],bt[i],su[i],wt[i],tat[i]);
    }
        printf("\n average waiting time is--- %f",awt/n);
        printf("\n average turn around time is ---%f",atat/n);
    
}