#include <stdio.h>

struct alphabet
{
    char a;
    int num;
};
int main()
{
    struct alphabet count[26];
    int i,j;
    char b;

    printf("ENTER THE ALPHABETS:\n");

    for(i=0;i<26;i++)
    {
        scanf("%c\n",&count[i].a);
        count[i].num=i+1;
    }

    printf("\n");


        scanf("%c",&b);

        for(i=0;i<26;i++)
        {
            if(count[i].a==b)
            {
                printf("%d th no. element\n",count[i].num);
            }


        }

}
