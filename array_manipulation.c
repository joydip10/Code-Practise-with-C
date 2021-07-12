#include <stdio.h>
int main()
{
    int f_t[10]={57,76,54,89,98,90,98,76,54,90};
    int s_t[10]={56,76,99,56,76,87,89,98,99,100};
    int t_t[10]={78,67,98,78,98,78,98,78,98,89};
    double total[10];
    int i;
    int t;
    for(i=0;i<10;i++){
        total[i]=f_t[i]/4.0 + s_t[i]/4.0 + t_t[i]/2.0;
         }
    for(i=1;i<=10;i++){
            printf("ROLL NO. %d\t",i);
            printf("MARKS=%.2lf\n",total[i-1]);
    }
    for(i=1;i<=10;i++){
    if(total[i-1]==87.25){

           printf("%d\t",i);
    }


    }



}
