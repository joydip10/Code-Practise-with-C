#include <stdio.h>

int func(int a)
{
    int i;
    if(a==10)
    {
        printf("10\n");
        return 0;
    }
    else
    {
        for(i=1;i<10;i++)
        printf("%d\n",i);
    }
}

int main()
{
    int a;
    a=10;
    func(a);
}
