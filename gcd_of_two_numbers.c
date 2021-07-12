#include<stdio.h>

int GCD(int a,int b)
{
    if(b>a)
        return GCD(b,a);
    else if(b==0)
        return a;
    else
        return GCD(b,a%b);
}

int main()
{
    int a,b;
    int T;
    printf("ENTER THE NUMBER OF TIMES YOU WANT TO PLAY THE LOOPS : ");
    scanf("%d",&T);
    while(T--){
    printf("ENTER TWO NUMBERS : ");
    scanf("%d %d",&a,&b);
    printf("THE GCD OF THE TWO NUMBERS IS : %d\n\n\n\n\n\n",GCD(a,b));
    }
    return 0;
}
