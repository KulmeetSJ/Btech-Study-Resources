//Runge Kutta Method

#include<stdio.h>

float f(float x,float y)
{
return (x*x)+(y*y);
}

void main()
{
float x,y,h,xn,k1,k2,k3,k4;

printf("Enter the values of x0,y0,h and xn: ");
scanf("%f%f%f%f",&x,&y,&h,&xn);

while(x<xn)
{
 k1= h*f(x,y);
 k2= h*f(x+h/2, x+k1/2);
 k3= h*f(x+h/2, x+k2/2);
 k4 = h*f(x+h, y+k3);
 
 y = y+(k1 + (2*k2) + (2*k3) + k4)/6;
 x=x+h;

}

printf("Output = %f",y);

}