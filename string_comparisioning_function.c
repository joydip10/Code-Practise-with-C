#include <stdio.h>

int main()
{
    char str[100];
    char srt[100];

    printf("ENTER STRINGS:\n");
    gets(str);
    gets(srt);

    int i,j,check=0;

    for(i=0;str[i]!='\0' || srt[i]!='\0';i++)
    {
        if(str[i]!=srt[j])
        {
            check=1;
        }

    }
    if(check==0)
    {
        printf("strings are same\n");
    }
    else if(check==1)
    {
        printf("strings are different\n");
    }
}
