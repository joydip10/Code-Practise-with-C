#include<stdio.h>

int main()
{
    int a,i,c,b,sum,count;
    for(a=1,sum=0;a<10;a++)
    {
    count=0;
    for(i=0;;i++)
    {
        if(b==0) break;
        c=(int)a%10;
        a=(int)a/10;
        printf("%d\n",c);
        sum=sum+c;
        b=a;

    }
    if(sum==5) count++;
    }
    printf("count=%d\n",count);

    printf("THE SUM OF ALL DIGITS : %d\n",sum);
}
