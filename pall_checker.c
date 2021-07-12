#include<stdio.h>
int p_c(int num)
{
    int p=num;
    int digit;
    int rev=0;
    while(p!=0)
    {
        digit=p%10;
        rev=(rev*10)+digit;
        p=p/10;
    }
    if(num==rev)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int i,q=0,r,p;
    int num;
    scanf("%d",&num);

    for(i=1;;i++)
    {
       p=i;
       if(p_c(p)==1)
       {
           q++;
           r=q;
       }
       if(r==num)
       {
           printf("%d\n",i);
           break;
       }


    }

}
