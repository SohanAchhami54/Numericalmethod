#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    float v=0,p,xv,x[10],fx[10],dd[10];
    printf("Enter the number of points:");
    scanf("%d",&n);
    printf("Enter the value of x:");
    scanf("%f",&xv);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of x and fx at i=%d\n",i);
        scanf("%f%f",&x[i],&fx[i]);
    }
    for(i=0;i<n;i++)
        dd[i]=fx[i];
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
            dd[j]=(dd[j]-dd[j-1])/(x[j]-x[j-1-i]);
    }
    v=0;
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<=i-1;j++)
            p=p*(xv-x[j]);
        v=v+dd[i]*p;
    }
    printf("The newton divide difference table is:%f",v);
     printf("\nSohan Mijar\n");
    printf("Roll no:21");
    return 0;
}

