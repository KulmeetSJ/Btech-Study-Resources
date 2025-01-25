//Euler's Method

#include<stdio.h>

#define f(x,y) (1-y)

void main()
{
float x,y,h,xn;

printf("Enter the values of x0,y0,h and xn :");
scanf("%f%f%f%f",&x,&y,&h,&xn);

while(x<xn)
{
 y = y+h*f(x,y);
 x +=h;
 printf("y(%f) = %f\n",x,y);

}

}