#include<stdio.h>
#define ACCURACY 0.0001

int main()
{
    int n,count;
    float x,term,sum;
    printf("ENTER VALUE OF x : ");
    scanf("%f",&x);
    n=term=sum=count=1;
    while(n<=100)
    {
        term=term*x/n;
        sum=sum+term;
        count+=1;
        if(term<ACCURACY)
        {
            n=999;
        }
        else
        {
            n+=1;
        }
    }
    printf("TERMS=%d SUM=%f\n",count,sum);

    return 0;
}
