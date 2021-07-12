#include <stdio.h>
int main()
{
    int m,n;
    printf("ENTER THE VALUE OF m & n : ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    int i,j;
    printf("\nENTER THE ELEMENT OF THE MATRIX : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nTHE MATRIX IS : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(j=0;j<m-1;j++)
    {
        for(i=j+1;i<m;i++)
        {
            a[i][j]=0;
        }
    }
    printf("/n THE UPPER TRIANGULAR MATRIX : \n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}
