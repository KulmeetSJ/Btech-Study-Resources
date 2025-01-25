//Newton Backward Interpolation Method

#include<stdio.h>
#define MAX 50

void main()
{
int n,i,j,k;
float num =1.0, fact=1.0 , x,u,h,y;

float arrX[MAX], arrY[MAX] , diff[MAX][5];

printf("Enter n:");
scanf("%d",&n);

printf("Enter values of x & y :\n");
for(i=0;i<=n;i++)
{
scanf("%f%f",&arrX[i],&arrY[i]);
}

printf("Enter x for which we have to find value of y:");
scanf("%d",&x);

for(i=0;i<=n-1;i++)
{
 diff[i][1] = arrY[i+1]-arrY[i]; 
}

h = arrX[1]-arrX[0];


for(j=2;j<5;j++)
{
 for(i=0;i<=n-j;i++)
 {
   diff[i][j] = diff[i+1][j-1] - diff[i][j-1];
 }
 i=n;
}
u = (x - arrX[i])/h;
y = arrY[i];

for(k=1;k<5;k++)
{
 num = num*(u+k-1);
 fact = fact*k;
 y=y+(num/fact) * diff[i-k][k];
}

printf("Value of y = %f when x =%f",y,x);
}