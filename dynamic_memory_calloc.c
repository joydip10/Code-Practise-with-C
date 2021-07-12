#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr=(int *)calloc(10,4);
    ptr[0]=1;
    printf("%d",ptr[0]);
    free(ptr);
    return 0;
}
