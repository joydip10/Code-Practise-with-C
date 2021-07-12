#include <stdio.h>

int main()
{
    char str[100],s[100];

    printf("ENTER A STRING OF WORDS :");

    scanf("%[^\n]",str);

    int i;

    for(i=0;str[i] != '\0';i++);

    printf("THE LENGTH OF THE STRING YOU ENTERED IS %d\n",i);

    int j,k;
    for(j=i-1,k=0;j>=0,k<i;j--,k++)
    {
        s[k]=str[j];

    }
    s[k]=str[j];

    printf("THE GIVEN STRING IN REVERSED ORDER :  ");
    printf("%s",s);

}
