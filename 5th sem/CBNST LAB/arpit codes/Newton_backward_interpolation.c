#include<stdio.h>
#define max 50

void main()
{
    float arrx[max+1], arry[max+1], diff[max+1][5];
    float  num=1.0, den=1.0, x,u,h,y;
    int i,j,k,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter the values of x and y respectively: \n");
    for(i=0;i<=n;i++)
        scanf("%f%f",&arrx[i],&arry[i]);
    printf("\nenter the value of x for which value of y is needed:");
    scanf("%f",&x);
    h=arrx[1]-arrx[0];
    for(i=0;i<=n-1;i++)
        diff[i][1]=arry[i+1]-arry[i];
    for(j=2;j<5;j++)
        for(i=0;i<=n-j;i++)
            diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
    i=n;
    u = (x-arrx[i])/h;
    y = arry[i];
    for(k=1;k<5;k++){
        num = num*(u+k-1);
        den = den*k;
        y = y+(num/den)*diff[i-k][k];
    }
    printf("value of y = %f when x = %f",y,x);
}
