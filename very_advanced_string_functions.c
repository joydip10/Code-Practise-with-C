#include <stdio.h>
#include<string.h>
int main()
{
    char str_1[10],str_2[10];
    printf("ENTER THE FIRST STRING : \n");
    gets(str_1);
    int len,len_1;
    len=strspn(str_1,"abcdefghijklmnopqrstuvwxyz");
    printf("STRSPN FUNCTION OUTPUT : %d\n",len);
    len=strcspn(str_1,"abcdefghijklmnopqrstuvwxyz");
    printf("STRCSPN FUNCTION OUTPUT : %d\n",len);
}
