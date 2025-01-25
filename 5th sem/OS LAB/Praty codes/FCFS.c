#include<stdio.h>
int main()
{
int p;
printf("Enter the number of processes\n");
scanf("%d",&p);

int at[p],bt[p],ct[p];
printf("Enter the arrival time and burst  time of processes\n");
for(int i=0;i<p;i++)
{
scanf("%d %d",&at[i],&bt[i]);
}
int c=0,tat[p],wt[p];
for(int i=0;i<p;i++)
{
for(int j=0;j<p-1;j++)
{
if(at[j]>at[j+1])
{
int temp=at[j];
at[j]=at[j+1];
at[j+1]=temp;
temp=bt[j];
bt[j]=bt[j+1];
bt[j+1]=temp;
}
}
}
for(int i=0;i<p;i++)
{
if(c==0)
c=at[i]+bt[i];
else
c+=bt[i];
ct[i]=c;
printf("%d ",c);
tat[i]=ct[i]-at[i];
wt[i]=tat[i]-bt[i];
}
int Tat=0,Wt=0;
for(int i=0;i<p;i++)
{
Tat+=tat[i];
Wt+=wt[i];
}
printf("\nAverage turn around time is: %d",Tat/p);
printf("\nAverage waiting time is: %d",Wt/p);
return 0;
}
