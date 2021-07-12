#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,i;
    ptr=(int *)malloc(100*4);

    ptr[0]=1;
    for(i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }
    free(ptr);
}
