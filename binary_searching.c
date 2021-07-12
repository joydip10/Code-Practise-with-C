#include <stdio.h>

int main()

{
    int ara[5]={1,2,3,4,5};

    int i,j;

    printf("ENTER THE DESIRED NUMBER : ");
    scanf("%d",&j);

    int l_i=0;
    int h_i=4;
    int m_i;

    for(i=0;i<5;i++)
    {
        m_i=(l_i+h_i)/2;
        if(j==ara[m_i])
        {
            break;
        }
        else if(j<ara[m_i])
        {
            h_i=m_i-1;
        }
        else if(j>ara[m_i])
        {
            l_i=m_i+1;
        }
    }

    if(l_i>h_i)
    {
        printf("THE NUMBER IS NOT FOUND\n");
    }
    else
    {
        printf("THE NUMBER %d IS IN %d NO. POSITION\n",j,m_i+1);
    }
}

