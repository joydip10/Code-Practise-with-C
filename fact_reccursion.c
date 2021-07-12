#include <stdio.h>

int factorial(long long int i)
{
    if(i==1)
        return 1;
    else
        return i*factorial(i-1);
}

int main()

{
    int i;
    while(scanf("%d",&i) != EOF)
    {
        if(i>0)
        {
            printf("%lld is the factorial of %d\n",factorial(i),i);
        }
        else
        {
            printf("ITS NOT POSSIBLE\n");
        }
    }

    return 0;
}
