#include <stdio.h>

int main()

{
    int ara_1[5];

    int i,j,temp;

    printf("ENTER THE NUMBERS IN ARRAY :");

    for(i=0;i<5;i++)
    {
        scanf("%d",&ara_1[i]);
    }
    printf("THE ARRAY IS :");
    for(j=0;j<5;j++)
    {
        printf("%d\t",ara_1[j]);
    }

    printf("\n");


    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(ara_1[i]<ara_1[j])
            {
                temp=ara_1[i];
                ara_1[i]=ara_1[j];
                ara_1[j]=temp;
            }
        }


    }

    printf("AFTER SORTING THE ARRAY BECOMES :");

    for(i=0;i<5;i++)
    {
        printf("%d\t",ara_1[i]);
    }

    return 0;


}
