#include<stdio.h>



int main()
{
    int p,digit,rev=0,q;
    scanf("%d",&p);
    q=p;

    do
    {
        digit=p%10;
        rev=(rev*10)+digit;
        p=p/10;
    }while(p!=0);

    printf("reversed number : %d\n",rev);
    if(q!=rev)
    {
        printf("NOT PAllindrome\n");
    }
    else
    {
        printf("Pallindrome\n");
    }
}

