#include <stdio.h>
int count(void)
{
   static int n=0;
    n++;
    return n;
}

int main()
{
    printf("%d\n",count());
     printf("%d\n",count());

}
