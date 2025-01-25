#include<stdio.h>
#include<stdlib.h>

void main()
{

    int n,i,j,k;
    float sum=0.0,c;
    printf("enter the dimension value:");
    scanf("%d",&n);

    float a[n][n+1],x[n];

    printf("enter the elements row wise \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%f",&a[i][j]);
        }
    }

    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(i!=j)
            {
                c=a[i][j]/a[j][j];
                for(k=1;k<=n+1;k++)
                {
                    a[i][k]=a[i][k]-c*a[j][k];
                }
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        x[i]=a[i][n+1]/a[i][i];
        printf("\nx%d = %f\n",i,x[i]);
    }

}
