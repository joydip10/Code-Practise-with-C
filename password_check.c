#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char ch;
    char s[13];
    int i=0;
    while(1)
    {
        ch=getch();
        printf("*");
        if(ch==13)
        {
            break;
        }
        s[i++]=ch;

    }
    s[i]='\0';

    char pass[13]="HELLO";

    if(strcmp(s,pass)==0)
    {
        printf("\nmatched\n");
        return 0;
    }
    else
    {
        printf("not matched\n");
        return 0;
    }
}
