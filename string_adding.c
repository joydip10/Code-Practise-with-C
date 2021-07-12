#include <stdio.h>

int main()

{
    char s[100],p[100];
    printf("ENTER A STRING : ");
    gets(s);
    printf("ENTER A STRING : ");
    gets(p);
    int i;
    for(i=0;s[i] != '\0';i++);
    int j;
    for(j=0;p[j] != '\0';j++);
    int k,l;
    for(k=i,l=0;k<(i+j),l<j;k++,l++)
    {
        s[k]=p[l];
    }
    s[k]=p[l];

    printf("AFTER ADDING A STRING WITH OTHER ONE : ");
    puts(s);

}
