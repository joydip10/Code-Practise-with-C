#include <stdio.h>

struct mystructure
{
    int a;
    double b;

};

int main()
{
    struct mystructure obj;

    printf("SIZE OF THE STRUCTURE mystructure: %d",sizeof(obj));
}
