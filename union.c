#include <stdio.h>
union mystructure
{
    int a;
    float b;
}obj;

int main()
{
    printf("SIZE OF UNION:%d",sizeof(obj));
}
