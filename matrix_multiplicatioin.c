#include <stdio.h>

int main()

{
    int A[2][2]={1,2,3,4};
    int B[2][2]={5,6,7,8};
    int C[2][2],i,j,k,s=0;

    printf("THE (2 X 2) MATRIX A :\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("THE (2 X 2) MATRIX B : \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",B[i][j]);
        }

        printf("\n");
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            s=0;
            for(k=0;k<2;k++)
            {
                s=s+A[i][k]*B[k][j];
            }
            C[i][j]=s;
        }
    }

    printf("THE (2 X 2) MATRIX C WHICH IS THE RESULT OF MULTIPLICATION OF A AND B :\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

}
