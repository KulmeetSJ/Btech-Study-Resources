#include<stdio.h>

float f(float x , float y){
return x+y;
}

void main(){
  float x,y,h,xn,s1,s2,s3,s4;
  printf("enter the values of x0, y0, h and xn : ");
  scanf("%f%f%f%f",&x,&y,&h,&xn);
  while(x<xn){
    s1=h*f(x,y);
    s2=h*f(x+h/2, y+s1/2);
    s3=h*f(x+h/2, y+s2/2);
    s4=h*f(x+h, y+s3);
    y=y+(s1+(2*s2)+(2*s3)+s4)/6;
    x=x+h;
  }
  printf("output = %f",y);
}

