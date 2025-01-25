//BIsection method

#include<stdio.h>
#include<math.h>

#define e 0.01
#define f(x) (x*x)-3 

int main()
{
float x0,x1,x2;
float f0,f1,f2;

int i=0;

printf("Enter the values of x0 and x1:");
scanf("%f%f",&x0,&x1);

do{
printf("x0=%f  , x1 =%f \n",x0,x1);
f0=f(x0);
f1=f(x1);
x2=(x0+x1)/2;
f2=f(x2);

if(f2*f0>0)
  x0=x2;
else
  x1=x2;
  
i++;

printf("Iteration: %d \t",i);
printf("Root: %f \t",x2);
printf("Function value:%f \n",f2);
}while(fabs(x0-x1)>e);


return 0;
}