#include <stdio.h>


int main()
{
    int n=22;

    while(1)
    {
        printf("%d ",n);
        if(n==1)
        {
            break;
        }
        else if(n%2 != 0)
        {
            n=(3*n)+1;
        }
        else if(n%2==0)
        {
            n=n/2;
        }

    }
}
