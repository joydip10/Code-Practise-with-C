#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,i;
    ptr=(int *)malloc(10*4);


    for(i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }

    ptr=(int *)realloc(ptr,5*4);

    for(i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }
    free(ptr);
}
