// Newton Forward Interpolation

#include<stdio.h>

#define max 50

void main()
{

float arrX[max+1], arrY[max+1] , diff[max+1][5];
float num = 1.0, den=1.0, x,u,h,y;
int i,j,k,n;

printf("Enter the value of n: ");
scanf("%d",&n);

printf("Enter the values of x & y respectively: \n");
for(i=0;i<n;i++)
 scanf("%f%f",&arrX[i],&arrY[i]);
 
printf("Enter the value of x for which value of y is needed:");
scanf("%f",&x);

h=arrX[1]-arrX[0]; //Stores the difference

for(i=0;i<=n-1;i++)
{
   diff[i][1]=arrY[i+1] - arrY[i];
}

for(j=2;j<5;j++)
{
  for(i=0;i<=n-j;i++)
  {
   diff[i][j] = diff[i+1][j-1] - diff[i][j-1];
  }
i=0;
}

u = (x-arrX[i])/h;
y = arrY[i];

for(k=1;k<5;k++)
{ 
  num = num * (u-k+1);
  den = den * k;
  y = y+(num/den)*diff[i][k];
}

printf("Value of y =%f when x =%f",y,x);

}