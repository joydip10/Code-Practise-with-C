#include <stdio.h>
int main()

{


    int i,k,f;



    while(scanf("%d",&i) != EOF)
    {
        if(i>0)
        {
           f=1;
           for(k=i;k>=1;k--)
           {
               f=f*k;

           }
           printf("%d is the factorial of %d",f,i);
        }
        else
        {
            printf("ITS NOT POSSIBLE\n");

        }


    }
}
