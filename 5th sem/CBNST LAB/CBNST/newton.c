//Newton Raphson Method

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define e 0.0001
#define f(x) (-4*x + cos(x) + 2 )
#define df(x) (-4 - sin(x))


int main()
{
float x0,x1,fx0,f1,dfx0;
int i=0;

printf("Enter the value of x0:");
scanf("%f",&x0);
x1 = x0;

do{
x0 = x1;
fx0 = f(x0);
dfx0 = df(x0);
x1 = x0 - (fx0/dfx0);
i++;
printf("Iteration: %d \t",i);
printf("Root:%f\n",x1);
}while(fabs(x0-x1)>e);

return 0;
}