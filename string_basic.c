#include <stdio.h>

int main()

{
    char a[100],b[100];

    printf("ENTER A WORD : ");
    gets(a);

    int i,j,k,l;

    for(i=0;a[i]!= '\0';i++);

    printf("THE LENGTH OF THE WORD IS %d \n",i);

    for(j=i-1,k=0;j>=0,k<i;j--,k++)
    {
        b[k]=a[j];
    }

    for(l=0;l<i;l++)
    {
        printf("%s",b[l]);
    }

}
