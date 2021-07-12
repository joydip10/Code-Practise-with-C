#include<stdio.h>
#include<string.h>
int main()
{
    char str_1[10],str_2[10];
    printf("ENTER FIRST STRING : ");
    gets(str_1);
    printf("ENTER SECOND STRING : ");
    gets(str_2);
    char ch;
    int base,adress,adress_1,adress_2;
    base=(int)(str_1);
    adress=(int)strchr(str_1,'Y');
    adress_1=(int)strrchr(str_1,'Y');
    adress_2=(int)strstr(str_1,"OY");
    printf("BASE = %d \n ADRESS = %d \n ADRESS_1 = %d \n ADRESS_2 = %d \n",base,adress,adress_1,adress_2 );
}
