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
   for(i=1;i<n;i++){
     if(i%3!=0)
     ans = ans + 3*f(x0+i*h);
     else
     ans = ans + 2*f(x0+i*h);
   }
   ans = ans * 3 * (h/8);
   printf("\nvalue of integral is : %f \n",ans);
}
