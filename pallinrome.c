#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],p[100];

    printf("ENTER A STRING : ");

    gets(s);



    int i,j;

    for(i=strlen(s)-1,j=0;i>=0,j<strlen(s);i--,j++)
    {
        p[j]=s[i];
    }
    p[j]=s[i];

    if(strcmp(s,p)==0)
    {
        printf("THE WORD IS PALLINDROME\n");
    }
    else
    {
        printf("NOT PALLINDROME\n");
    }

    return 0;



}
