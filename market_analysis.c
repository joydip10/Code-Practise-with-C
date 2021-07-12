#include <stdio.h>

int main()
{
    float value,h,l,sum=0.0;
    int count=0;
    char c;
    printf("ENTER THE PRICES : \n");
    while(1)
    {
        scanf("%f",&value);
        if((c=getchar())=='S`') break;
        count=count+1;
        sum=sum+value;
        if(count==1) h=l=value;
        if(value>h) h=value;
        if(value<l) l=value;

    }
    printf("AVERAGE : %f\n",sum/count);
    printf("RANGE : %f\n",(h+l)/2);
}
