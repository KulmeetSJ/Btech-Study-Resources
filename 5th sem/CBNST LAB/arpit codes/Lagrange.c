#include<stdio.h>

void main()
{
   float x[30],y[30],c,a,b,k=0;
   int i,j,n;
   printf("enter the number of terms of table:");
   scanf("%d",&n);
   printf("enter the respective values of x and y:");
    for(i=0;i<n;i++)
       scanf("%f%f",&x[i],&y[i]);
   printf(" \n\n\n Enter the value of the x to find the respective value of y\n\n\n");
       scanf("%f",&c);
    for(i=0; i<n; i++){
       a=1;b=1;
        for(j=0; j<n; j++){
          if(j!=i){
          a=a*(c-x[j]);
          b=b*(x[i]-x[j]);
          }
        }
       k=k+((a/b)*y[i]);
    }
    printf("\n\n The respective value of the variable y is: %f",k);
 }
