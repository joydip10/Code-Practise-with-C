#include <stdio.h>
#include <string.h>

int main()
{
    struct student
    {
        char name[20];
        int id;
        double cgpa;
    };

    int n=3,a=0,b=0;
    struct student cste[n];
    while(a<n){
    printf("ENTER THE NAME,ID & CGPA: ");
    scanf("%s%d%lf",&cste[a].name,&cste[a].id,&cste[a].cgpa);
    a++;
    }

    printf("\n\n");

    printf("SO THE DETAILLS ARE:");
    printf("\n");
    while(b<n){

    printf("NAME:%s\n",cste[b].name);
    printf("STUDENT'S ID:%d\n",cste[b].id);
    printf("STUDENTS'S CGPA: %.2lf\n",cste[b].cgpa);
    b++;
    }
}
