#include <stdio.h>
#include <string.h>

int main()
{
    struct account
    {
        char name[20];
        char pass[20];
        char repass[20];

        struct birth
        {
            int day;
            int month;
            int year;
        }birth;

    };

    struct account user;

    printf("ENTER NAME: ");
    scanf("%s",&user.name);
    printf("ENTER PASSWORD: ");
    scanf("%s",&user.pass);
    printf("RE-ENTER PASSWORD: ");
    scanf("%s",&user.repass);
    printf("ENTER BIRTH DATE: ");
    scanf("%d",&user.birth.day);
    printf("ENTER BIRTH MONTH: ");
    scanf("%d",&user.birth.month);
    printf("ENTER BIRTH YEAR: ");
    scanf("%d",&user.birth.year);

    if(strcmp(user.pass,user.repass) == 0)
    {
        printf("\n        WELCOME        \n");
        printf("USER: %s\n",user.name);
        printf("PASSWORD: %s\n",user.pass);
        printf("DATE OF BIRTH: %d/%d/%d\n",user.birth.day,user.birth.month,user.birth.year);
        return 0;

    }
    else
    {
        printf("PASSWORD YOU RE-ENTERED HAS'NT MATCH THE ORIGINAL PASSWORD\n");
        printf("PLEASE RESTART THE PROCESS\n");
        return 0;
    }
}
