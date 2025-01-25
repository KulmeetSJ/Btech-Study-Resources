// Gauss Seidel Method

#include<stdio.h>
#include<math.h>

#define f1(x,y,z) (-17-4*y-z)/9
#define f2(x,y,z) (4-x)/6
#define f3(x,y,z) (x-2*y-14)/6



int main()
{

float x0,y0,z0 =0;
float x1,y1,z1; // NExt guesses

float ex,ey,ez; // Errors

float e = 0.0001;

do{
 x1 = f1(x0,y0,z0);
 y1 = f2(x1,y0,z0);
 z1 = f3(x1,y1,z0);
 
 printf("%f\t%f\t%f\n",x1,y1,z1);
 
 ex = fabs(x1-x0);
 ey = fabs(y1-y0);
 ez = fabs(z1-z0);
 
 x0=x1;
 y0=y1;
 z0=z1;

}while(ex>e && ey>e && ez>e);

printf("Final Approximation:\n=%f\ny=%f\nz=%f",x1,y1,z1);


return 0;
}