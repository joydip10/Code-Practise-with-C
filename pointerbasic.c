#include<stdio.h>
#include<conio.h>
int main()
{
    char arr[10];
    int *p;
    p=&arr[0];
    scanf("%[^\n]",arr);
    printf("%d",p);
}
