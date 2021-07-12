#include <stdio.h>

int main()

{
    char str[100];

    int i,check=0;

    printf("ENTER A WORD :");

    scanf("%[^\n]",&str);

    for(i=0;str[i] != '\0';i++);

    for(i=0;str[i] != '\0';i++)
    {
        if(str[i]==' ')
        {
            check++;
        }
    }

    printf("THE LENGTH OF THE STRING IS %d\n",i);
    printf("THE NUMBER OF WORDS IS %d\n",check+1);

    return 0;
}
