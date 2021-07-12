#include <stdio.h>

int main()

{
    char string[100],str[100];

    printf("ENTER WORDS:");

    scanf("%[^\n]",&string);

    int i,k=0;

    for(i=0;string[i] != '\0';i++)
    {
        if(string[i]==' ')
        {
            k++;
        }
    }


    printf("STRING LENGTH OF string is %d\n",i-k);


    int j,l;

    for(j=i-1,l=0;string[j] != ' ',l<i;j--,l++)
    {
        str[l]=string[j];
    }

    printf("AFTER BACK PRINTING:%s\n",str);

    return 0;


}
