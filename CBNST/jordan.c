//Gauss Jordan Method

#include<stdio.h>
#include<stdlib.h>

void main()
{
int n,i,j,k;
float sum=0.0,c;

printf("Enter order of matrix:");
scanf("%d",&n);

float A[n][n+1] , res[n];

printf("Enter elements in the augmented matrix\n");
for(i=1;i<=n;i++)
{
for (j=1;j<=n+1;j++)
{    
printf("a[%d][%d]=",i,j);
scanf("%f",&A[i][j]);
}
}

for(j=1;j<=n;j++)
{
 for(i=1;i<=n;i++)
 {
 if(i!=j)
 {
  c=A[i][j]/A[j][j];
  for(k=1;k<=n+1;k++)
  {
   A[i][k] = A[i][k] - c*A[j][k];
  }
 } 
}
}

for(i=1;i<=n;i++)
{
res[i] = A[i][n+1]/A[i][i];
printf("\nx%d = %f",i,res[i]);

}




}