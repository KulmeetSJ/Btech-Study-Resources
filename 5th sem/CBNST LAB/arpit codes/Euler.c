#include<stdio.h>

float f(float x , float y){
return (y-x)/(x+y);
}

void main(){
  float x,y,h,xn;
  printf("enter the values of x0, y0, h and xn : ");
  scanf("%f%f%f%f",&x,&y,&h,&xn);
  while(x<xn){
    y = y+h*f(x,y);
    x += h;
    printf("y(%f) = %f\n",x,y);
  }
}

