#include<stdio.h>

int main()
{
    float a,b,c;
    printf("ENTER THE NUMBERS : \n");
    scanf("%f %f %f",&a,&b,&c);

    if(a>b)
    {
        if(b>c)
        {
            printf("%f is the largest\n",a);
        }
        else if(b<c)
        {
            if(c>a)
            {
                printf("%f is the largest\n",c);
            }
            else
            {
                printf("%f is the largest\n",a);
            }
        }
    }
    else
    {
        if(b>c)
        {
            printf("%f is the largest\n",b);
        }
        else if(b<c)
        {
            printf("%f is the largest\n",c);
        }
    }

}
