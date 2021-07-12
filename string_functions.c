#include <stdio.h>
#include <string.h>

int main()

{
    char s[100],p[100];

    printf("ENTER A STRING 'S' : ");
    gets(s);
    printf("ENTER ANOTHER STRING 'P' : ");
    gets(p);

    printf("LENGTH OF STRING 'S':%d\n",strlen(s));
    printf("LENGTH OF STRING 'P':%d\n",strlen(p));

    printf("ADDING TWO STRINGS 'S' & 'P' : %s\n",strcat(s,p));

    printf("COPYING ONE STRING IN ANOTHER : %s\n",strcpy(p,s));

    char j[100],k[100];
    printf("\n\nENTER STRING 'J' : ");
    gets(j);
    printf("ENTER STRING 'K' : ");
    gets(k);

    printf("COMPARE TWO STRINGS : ");

    if(strcmp(j,k)==0)
    {
        printf("SAME\n");
    }
    else
    {
        printf("DIFFERENT\n");
    }

    printf("ADDING TWO STRINGS : %s\n",strncat(j,k,3));

    printf("COPYING TWO STRINGS : %s\n",strncpy(j,k,2));

    char l[100],m[100];

    printf("\n\nENTER A STRING : ");
    gets(l);
    printf("ENTER A STRING : ");
    gets(m);




    if(strncmp(l,m,3)==0)
    {
      printf("FIRST THREE WORDS OF BOTH OF THE STRINGS ARE SAME\n");
    }
    else
    {
        printf("DIFFERENT\n");

    }

    printf("THE RETURNED VALUE AFTER COMPARISION : %d\n",strcoll(l,m));

    char str[100],stp[100];

    printf("ENTER A STRING : ");
    gets(str);
    printf("ADRESS OF 'o' IN 'STR'=%d\n",strrchr(str,'o'));
    printf("ADRESS OF 'STR' = %d\n",str);
    printf("ADRESS OF STRING IN STRING =%d\n",strstr(str,"llo"));
    printf("ENTER ANOTHER STRING : ");
    gets(stp);
    printf("%d IS THE RESULT OF STRSPN\n",strspn(str,stp));
    printf("%d IS THE RESULT OF STRCSPN\n",strcspn(str,stp));




}
