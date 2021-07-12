#include <stdio.h>

int main()

{
    char c[100],d[100];

    printf("ENTER THE DESIRED STRING : ");
    gets(c);

    int i,j;
    for(i=0;c[i] != '\0';i++);
    printf("THE LENGTH OF THE STRING IS %d \n",i);

    for(j=0,i=0;j<i,c[i] != '\0';j++,i++)
    {
        d[j]=c[i];
    }
    d[j]=c[i];

    printf("AFTER BEING COPIED THE NEW STRING BECOMES : ");

    puts(d);

    return 0;
}
