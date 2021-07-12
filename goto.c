#include<stdio.h>

int main()
{
    double x,y;
    int count=1;
    printf("ENTER FIVE real values in a line \n");
    read:
        scanf("%lf",&x);
    printf("\n");
    if(x<0)
        printf("VALUE %d is negative\n",count);
    else
    {
        y=sqrt(x);
        printf("%lf\t%lf\n",x,y);

    }
    count=count+1;
    if(count<=5)
        goto read;
    printf("\n\tEND OF THE COMPUTATION \n");


    return 0;


}
