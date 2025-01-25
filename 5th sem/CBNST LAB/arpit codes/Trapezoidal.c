#include<stdio.h>
#include<math.h>
float f(float x)
{
 return(1/(1+pow(x,2)));
}
void main(){
   int i,n;
   float x0,xn,h,ans=0;
   printf("enter the value of x0, xn and the number of subintervals: ");
   scanf("%f %f %d",&x0,&xn,&n);
   h=(xn-x0)/n;
   ans = ans + f(x0) + f(xn);
   for(i=1;i<n;i++)
     ans = ans + 2*f(x0+i*h);
   ans = ans * (h/2);
   printf("\nvalue of integral is : %f \n",ans);
}
