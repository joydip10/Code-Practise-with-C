#include<stdio.h>
int main()
{
    int m,n;
    printf("ENTER THE VALUES : \n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    int i,j;
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n THE %d X %d MATRIX IS : \n",m,n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
printf("THE DIAGONAL MATRIX : \n");

for(i=0;i<m;i++)
{
    for(j=0;j<m;j++)
    {
        if(j==i) a[i][j]=0;
    }
}
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
