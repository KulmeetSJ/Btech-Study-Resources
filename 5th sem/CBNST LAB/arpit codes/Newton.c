#include<math.h>
#include<stdio.h>

#define f(x) x*x-12
#define df(x) 2*x
#define e 0.001

void main()
{

    float x0,x1,f0,f1,df0;
    int i=0;

    printf("enter the value of x0:");
    scanf("%f",&x0);
    x1=x0;
    do{
        x0=x1;
        f0=f(x0);
        df0=df(x0);
        x1=x0-(f0/df0);
        i++;
        printf("iteration :%d \t",i);
        printf("root:%f\n",x1);

    }while(fabs(x0-x1)>e);

}
