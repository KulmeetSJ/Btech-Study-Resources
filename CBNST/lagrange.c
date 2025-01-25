//Lagrange's Interpolation Method

#include<stdio.h>


void main()
{
 float x[30],y[30],c,a,b,k=0;
 int i,j,n;
 printf("Enter the number of terms in the table:");
 scanf("%d",&n);
 printf("Enter respective values of x and y:");
  for(i=0;i<n;i++)
   scanf("%f%f",&x[i],&y[i]);
 
 printf("\nEnter the value of x to find the respective value of y: ");
 scanf("%f",&c);
 
 for(i=0;i<n;i++)
 {
  a=1,b=1;
  for(j=0;j<n;j++)
  {
   if(j!=i)
   {
     a=a*(c-x[j]);
	 b=b*(x[i]-x[j]);   
   }  
  }
  k =k+((a/b)*y[i]);
 }
printf("\nThe respective value of the variable y is: %f",k);

}