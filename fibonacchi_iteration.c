#include <stdio.h>

int main()
{
    int a;
    int b;
    int c=0;


    int i,n;


while(scanf("%d",&n)!= EOF)
{
a=0,b=1;

        for(i=1;i<=n;i++)

    {
        if(i==n)
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;

    }



}
    return 0;
}
