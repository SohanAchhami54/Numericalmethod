#include<stdio.h>
#define f(x) 3*(x)*(x)+2*(x)-5
int main()
{
    float h,x0,x1,x2,fx0,fx1,fx2,v;
    int n=2;
    printf("Enter lower and Upper Limit:\n");
    scanf("%f%f",&x0,&x2);
    h=(x2-x0)/n;
    x1=x0+h;
    fx0=f(x0);
    fx1=f(x1);
    fx2=f(x2);
    v=h/3*(fx0+4*fx1+fx2);
    printf("Value of Integration using Simpsons 1/3 rule=%f\n",v);
       printf("\nSohan Mijar\n");
    printf("Roll no:21");
    return 0;
}
