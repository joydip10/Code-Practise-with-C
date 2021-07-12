#include <stdio.h>
int recurssion(int n)
{
    printf("%d ",n);
    if(n==1) return 1;
    else if(n&1) recurssion((3*n)+1);
    else recurssion(n/2);
}

int main()
{
    int n=22;

    recurssion(n);

    return 0;
}
