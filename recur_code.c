#include<stdio.h>

int rec(int n)
{
    int sum=0;
    if(n/2!=0)
    {
    sum=sum+(n%2)+rec(n/2);
    }
    else return sum;
}

int main()
{
    int p=rec(123)+1;
    printf("%d\n",p);

}
