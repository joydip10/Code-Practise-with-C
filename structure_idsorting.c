#include <stdio.h>
#include <string.h>
 struct student
    {
        char name[20];
        int id;
        double cgpa;
    };
void input(struct student cste[])
{
    printf("*********INPUT*********\n");
    int a=0;
    int n=3;
    while(a<n){
    printf("ENTER THE NAME,ID & CGPA: ");
    scanf("%s%d%lf",&cste[a].name,&cste[a].id,&cste[a].cgpa);
    a++;

    }
}
void output(struct student cste[])
{
    printf("*********OUTPUT*********\n");

    int b=0;
    int n=3;
    while(b<n){

    printf("NAME:%s\n",cste[b].name);
    printf("STUDENT'S ID:%d\n",cste[b].id);
    printf("STUDENTS'S CGPA: %.2lf\n",cste[b].cgpa);
    printf("\n");

    b++;
    }

}

void namesort(struct student cste[])
{
    int i,j;
    int n=3;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(cste[i].id<cste[j].id)
            {
                struct student temp;

                strcpy(temp.name,cste[j].name);
                strcpy(cste[j].name,cste[i].name);
                strcpy(cste[i].name,temp.name);

                temp.id=cste[j].id;
                cste[j].id=cste[i].id;
                cste[i].id=temp.id;

                temp.cgpa=cste[j].cgpa;
                cste[j].cgpa=cste[i].cgpa;
                cste[i].cgpa=temp.cgpa;
            }
        }
    }
}

int main()
{
    int n=3;

    struct student cste[n];

    input(cste);
    printf("\n");
    namesort(cste);
    output(cste);

    return 0;

}
