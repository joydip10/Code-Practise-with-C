#include <stdio.h>
#include<string.h>
int main()

{
    char str_1[10],str_2[10],str_3[10];
    printf("ENTER THE FIRST STRING :\n");
    gets(str_1);
    printf("ENTER THE SECOND STRING :\n");
    gets(str_2);
    printf("LENGTH OF THE FIRST STRING : %d\n",strlen(str_1));
    printf("LENGTH OF THE SECOND STRING : %d\n",strlen(str_2));
    strcpy(str_3,str_2);
    printf("THE THIRD STRING IS : ");
    puts(str_3);
    strcat(str_1,str_2);
    printf("ADDING FIRST AND SECOND STRING : %s\n",str_1);
    if(strcmp(str_1,str_2)==0) printf("SAME STRING\n");
    else printf("DIFFERENT STRING\n");


    return 0;
}

