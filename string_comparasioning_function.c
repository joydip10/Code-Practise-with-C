#include <stdio.h>

void str_cmp(char s[],char p[])
{
    int i,j,check=0;
    for(i=0;s[i]!='\0';i++);
    for(j=0;p[j]!='\0';j++);
    int k,l;
    if(i != j)
    {
        check=1;
    }
    for(k=0,l=0;k<i,l<j;k++,l++)
    {
        if(s[k] != p[l])
        {
            check = 1;
            break;
        }


    }

    if(check == 1)
    {
        printf("STRINGS ARE NOT SAME\n");

    }
    else
    {
        printf("STRINGS ARE SAME\n");
    }

}

int main()
{
    char s[10],p[10];

    printf("ENTER A STRING : ");
    scanf("%[^\n]",s);

    printf("ENTER A STRING : ");
    scanf("%[^\n]",p);

    str_cmp(s,p);

    return 0;


}
