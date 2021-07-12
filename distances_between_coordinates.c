#include<stdio.h>
#include<math.h>

int main()
{
    double x,x1,y,y1;
    double distance,d;

    scanf("%lf %lf",&x,&y);
    scanf("%lf %lf",&x1,&y1);

    d=((fabs(x-x1))*(fabs(x-x1)))+((fabs(y-y1))*(fabs(y-y1)));
    distance=sqrt(d);

    printf("DISTANCE : %lf\n",distance);
    return 0;

}
