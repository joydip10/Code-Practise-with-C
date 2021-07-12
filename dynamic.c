#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(10 * sizeof(int));
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",p[i]);
    }
    p=(int*)realloc(p,5*sizeof(int));
    printf("\n%d",p[9]);
    free(p);

}
