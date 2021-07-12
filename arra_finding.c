#include <stdio.h>

int main()

{
    int ara[5];

    printf("ENTER THE ELEMENTS OF ARRAY :");

    int i,j;

    for(i=0;i<5;i++)
    {
        scanf("%d",&ara[i]);
    }

    printf("THE ARRAY IS : ");

    for(j=0;j<5;j++)
    {
        printf(" %d ",ara[j]);

    }

    printf("\n");

    int m;

    printf("ENTER THE DESIRED NUMBER : ");

    scanf("%d",&m);

    int check=0;

    for(i=0;i<5;i++)
    {
        if(ara[i]==m)
        {
            check++;

        }
    }
    if(check != 0)
    printf("THE DESIRED NUMBER IS FOUND AND ITS FOUND FOR %d TIME(S)\n",check);
    else
    printf("THE DESIRED NUMBER IS NOT FOUND\n");

    for(i=0;i<5;i++)
    {
        if(ara[i]==m)
        {
            printf("POSITION IS %d\n",i+1);
        }

    }

}


