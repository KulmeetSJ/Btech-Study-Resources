#include<math.h>
#include<stdio.h>

#define e 0.001
#define f(x) x*x*x-4*x-9

int main()
{
    float x0,x1,x2;
    float f0,f1,f2;

    int i=0;

        printf("enter the values of x0 and x1:");
        scanf("%f%f",&x0,&x1);
     do{
        printf("x0=%f , x1=%f \n",x0,x1);
        f0=f(x0);
        f1=f(x1);
        x2=(x0+x1)/2;
        f2=f(x2);
        if(f0*f2>0)
            x0=x2;
        else
            x1=x2;
        i++;

        printf("iteration : %d \t",i);
        printf("root :%f \t",x2);
        printf("function value:%f \n",f2);

    }while(fabs(x0-x1)>e);
    return 0;
}
