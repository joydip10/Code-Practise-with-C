#include <stdio.h>
#include<conio.h>
struct cste
{
    char f_n[20];
    char l_n[20];
    char pass[20];
    struct sex
    {
        int s;
    }sex;
    struct birthdate
    {
        int day;
        int month;
        int year;
    }birth;
};
void passgen(char pass[])
{
    int i=0;
    char ch;
    while(1)
    {
        ch=getch();
        putchar('*');
        if(i==5) break;
        pass[i]=ch;
        i++;
    }
    pass[i]='\0';
}
int main()
{
    struct cste student;
    char passcheck[20],repass[20],sexchk;
    printf("OPEN AN ACCOUNT AFTER FULFILLING THE FOLLOWING CRITERIAS : \n");
    printf("ENTER THE FIRST NAME : ");
    scanf("%[^\n]",&student.f_n);
    printf("ENTER THE LAST NAME : ");
    scanf("\n%[^\n]",&student.l_n);
    printf("ENETR THE PASSWORD : ");
    //scanf("\n%[^\n]",&student.pass);
    passgen(student.pass);
    strcpy(passcheck,student.pass);
    printf("\nRE-ENTER PASSWORD : ");
    //scanf("\n%[^\n]",repass);
    passgen(repass);
    if(strcmp(repass,passcheck) != 0)
    {
        printf("WRONG PASSWORD \n");
        return 0;
    }


        printf("\n\t\tENTER YOUR BIRTH DAY : ");
        scanf("%d",&student.birth.day);
        printf("\t\tENTER YOUR BIRTH MONTH : ");
        scanf("%d",&student.birth.month);
        printf("\t\tENTER YOUR BIRTH YEAR : ");
        scanf("%d",&student.birth.year);
        printf("ENETR YOUR GENDER : (press M for male and F for female) ");
        scanf("\n%c",&sexchk);
        if(sexchk!='M' && sexchk !='F')
        {
           printf("WRONG KEY HAS BEEN PRESSED\n");
            return 0;
        }
        else if(sexchk=='M')
        {
            student.sex.s=1;
        }
        else if(sexchk=='F')
        {
            student.sex.s=0;
        }


    printf("\n\n\n");

    printf("FIRST NAME : %s\n",student.f_n);
    printf("FIRST NAME : %s\n",student.l_n);
    printf("BIRTHDATE : %d/%d/%d\n",student.birth.day,student.birth.month,student.birth.year);
    if(student.sex.s==1)
    {
        printf("GENDER : MALE");
    }
    else if(student.sex.s==0)
    {
        printf("GENDER : FEMALE");
    }

    return 0;



}

