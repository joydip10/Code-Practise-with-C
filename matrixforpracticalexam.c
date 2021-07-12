#include <stdio.h>
int main()
{
    int a[10][10],i,j,m,n,d=0;
    printf("Your square matrix is : \n");
    scanf("%d",&m);
    n=m;
    if(m==2)
    {


           printf("Input Your desired matrix\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Your square matrix is :\n");
             for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }

            d = a[0][0]*a[1][1] - a[1][0]*a[0][1];

          printf("\nDeterminant of 2X2 matrix : %d\n",d);

          return 0;
    }

    if(m==3)
    {
        printf("Input Your desired matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Your square matrix is : \n");
         for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf(" %d\t", a[i][j]);
            }
            printf("\n");
        }

        d=a[0][0]*((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);
        printf("determinant is : %d",d);
        return 0;
    }
}
