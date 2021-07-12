#include <stdio.h>

int main()

{
    int ara[2][2]={
    {1,2},
    {3,4}
    };

    int i,j=0;

    printf("THE TWO DIMENSIONAL ARRAY : \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",ara[i][j]);
        }
        printf("\n");
    }

    int ara_2[2][3]={{1,2,3},
    {4,5,6}
    };

    printf("THE (2*3)MATRIX : \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",ara_2[i][j]);
        }
        printf("\n");
    }


    return 0;
}
