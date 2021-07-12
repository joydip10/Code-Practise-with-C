#include <stdio.h>

int check_prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x==1 || x % i!=0 )
        {
            return 0;
        }


        else
            return 1;
    }

}

int main()

{
    int m,n,s,i,temp,T;
    scanf("%d",&T);
    while(T--){
    s=0;
    printf("ENTER A NUMBER m :");
    scanf("%d",&m);
    printf("ENTER A NUMBER n :");
    scanf("%d",&n);

    if(m>n)
    {
       temp=m;
       m=n;
       n=temp;
    }

    for(i=m;i<=n;i++)
    {
        if(check_prime(i)==0 || i==1)
            s=s+i;
    }

    printf("THE SUM OF ALL PRIME NUMBERS BETWEEN %d AND %d : %d\n",m,n,s);

}

    return 0;
}
