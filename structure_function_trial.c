#include <stdio.h>

struct cste
{
    char name[20];
    int id;
    double cgpa;
};

void input(struct cste student[])
{
    int i;
    for(i=0;i<5;i++)
    {
        scanf("\n%[^\n]",&student[i].name);
        scanf("%d",&student[i].id);
        scanf("%lf",&student[i].cgpa);
}    }

void output(struct cste student[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Student_name : %s\n",student[i].name);
        printf("Student_id : %0.2d\n",student[i].id);
        printf("student_cgpa : %.2lf",student[i].cgpa);
        printf("\n\n");
    }
}
int main()
{
    struct cste student[5];
    input(student);
    output(student);
}
