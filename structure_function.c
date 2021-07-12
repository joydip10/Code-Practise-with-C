#include <stdio.h>
struct mystructure
    {
        int x;
        int y;
    };
struct mystructure add(struct mystructure a,struct mystructure b)
{
    struct mystructure result;
    result.x=a.x+b.x;
    result.y=a.y+b.y;
    return result;

}
void print (struct mystructure c)
{
    printf("Result_1=%d\n",c.x);
    printf("Result_2=%d\n",c.y);

}

struct mystructure swap(struct mystructure *c)
{
    struct mystructure temp;
    temp.x=c->x;
    c->x=c->y;
    c->y=temp.x;
};
int main()
{

    struct mystructure a,b,sum;

    a.x=5;
    a.y=5;
    b.x=6;
    b.y=10;

 sum=add(a,b);
 print(sum);

 printf("\n\n      After Swapping    \n\n");
 swap(&sum);
 print(sum);

 return 0;
}
