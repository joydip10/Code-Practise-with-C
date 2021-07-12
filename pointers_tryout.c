#include<stdio.h>

int main()
{
    int a=4;
    int *p=&a;
    int **q=&p;
    int ***r=&q;

    printf("%d\n",*p);// 4
    printf("%d %d\n",*q,p);// adress of p
    printf("%d\n",**r);// adress of p
}
