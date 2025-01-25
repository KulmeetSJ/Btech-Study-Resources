// Regula Falsi Method

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define e 0.001
#define f(x) ((2* exp(x) * sin(x)) -3)

int main()
{
float x0,x1,x2;
float f0,f1,f2;

int i=0;

printf("Enter the values of x0 and x1:");
scanf("%f%f",&x0,&x1);

do{
printf("x0=%.4f \tx1 =%.4f\n",x0,x1);
f0=f(x0);
f1=f(x1);
x2 = x0 - (((x1-x0)/(f1-f0))*f0);
f2 = f(x2);
if(f0*f2<0)
x0=x2;
else
x1=x2;

i++;

printf("Iteration:%d \tRoot :%.4f \tFunction value:%.4f \n",i,x2,f2);
}while(fabs(x0-x1)>e);

return 0;
}