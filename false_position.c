#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define f(x)  (x*x*x-2*x-5)
int main()
{
    float x0,x1,x;
    int k=0;
    do{
        printf("enter the ranges ....");
        scanf("%f %f",&x0,&x1);
    }
    while
        ((f(x0)*f(x1))>0);
    do
    {
        k++;
        x=x0-((x1-x0)*f(x0))/(f(x1)-f(x0));
        printf("%f\n",x);
        if(f(x)>0)
            x1=x;
        else
            x0=x;
    }
    while
        (fabs(f(x))>0.0001);
    printf("\n the answer is ===%f and number of iterations =%d",x,k);
    return 0;
}
