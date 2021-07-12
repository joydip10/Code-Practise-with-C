#include <stdio.h>
int main()
{
    int i,j;
    double m,n,o,g,l,v,t,k;
    double a[3][4];
    m=a[0][0];
    n=a[0][1];
    o=a[0][2];
    g=a[0][3];
    double p,q;
    printf("//INPUT OF ELEMENTS : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    printf("//OUTPUT MATRIX : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%.2lf  ",a[i][j]);
        }
        printf("\n");
    }

    p=-(a[1][0])/(a[0][0]);
   for(j=0;j<4;j++)
   {
       a[0][j]=a[0][j]*p;
   }
    for(i=1;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=a[i][j]+a[0][j];
        }
    }
    a[0][0]=m;
    a[0][1]=n;
    a[0][2]=o;
    a[0][3]=g;
    double r=-(a[2][0])/(a[0][0]);
    for(j=0;j<4;j++)
   {
       a[0][j]=a[0][j]*r;
   }

    for(i=2;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=a[i][j]+a[0][j];
        }
    }
    a[0][0]=m;
    a[0][1]=n;
    a[0][2]=o;
    a[0][3]=g;

   q=-a[2][1]/a[1][1];


   for(j=1;j<4;j++)
   {
       a[1][j]=a[1][j]*q;
   }

   for(i=2;i<3;i++)
   {
       for(j=0;j<4;j++)
       {
           a[2][j]=a[2][j]+a[1][j];
       }
   }
    l=a[1][0];
    v=a[1][1];
    t=a[1][2];
    k=a[1][3];
   printf("//AFTER GAUSSIAN ANALYSIS : \n");

   for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%.2lf  ",a[i][j]);
        }
        printf("\n");
    }

   double x,y,z;
   z=a[2][3]/a[2][2];
   y=(a[1][3])/(a[1][1]*(a[1][2]*z));
   x=(a[0][3])/(a[0][0]*(a[0][1]*y)*(a[0][2]*z));
   printf("//THE ROOTS ARE : \n");
   printf("X=%0.lf\n",x);
   printf("Y=%0.lf\n",y);
   printf("Z=%0.lf\n",z);

   return 0;
}
