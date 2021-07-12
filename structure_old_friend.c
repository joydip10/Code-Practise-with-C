#include<stdio.h>
#include <string.h>
int main()
{
    struct student
    {
        char name[200];
        int id;
        double cgpa;
    };

    struct student cste[3];

    int i,j;

    printf("ENTER THE DETAILS\n");
    for(i=1;i<=3;i++)
    {
        scanf("%s",cste[i].name);
        scanf("%d %lf",&cste[i].id,&cste[i].cgpa);
    }

    for(j=1;j<=3;j++)
    {
        printf("\nSTUDENT's NAME: ");
        printf("%s\n",cste[j].name);
        printf("STUDENT's ID: %d\n",cste[j].id);
        printf("STUDENT's CGPA: %lf",cste[j].cgpa);
    }
}
