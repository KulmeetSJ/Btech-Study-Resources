//Simpson's 3/8 Rule

#include<stdio.h>
#include<math.h>

#define f(x) (1/(1+pow(x,2)))

void main()
{
int n,i,j;

float x0,xn,h,ans=0;

printf("Enter the value of x0,xn and the number of intervals: ");
scanf("%f%f%d",&x0,&xn,&n);

h = (xn-x0)/n;
ans = ans + f(x0) + f(xn);

for(i=1;i<n;i++)
{
if(i%3!=0)
ans = ans + 3*f(x0+i*h);
else
ans = ans + 2*f(x0+i*h);

}

ans = ans *3*  h/8;


printf("\nValue of integral is : %f \n",ans);
}