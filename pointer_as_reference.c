#include<stdio.h>

int increament(int a)
{
    return a=a+1;
}

int main()
{
    int a=4;

    increament(a);

    printf("%d\n",a);

    printf("%d\n",increament(a));

    printf("%d\n",a);
}
