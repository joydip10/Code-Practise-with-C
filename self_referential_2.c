#include <stdio.h>
struct self
{
    int a;
    struct self *next;
};

void print_all(struct self pr)
{
    if(pr.a==0) return;
    printf("%d ",pr.a);
    print_all(*pr.next);

}

int main()
{
    struct self var1,var2,var3,var4;

    var1.a=5;
    var1.next=&var2;
    var2.a=6;
    var2.next=&var3;
    var3.a=9;
    var3.next=&var4;
    var4.a=0;

    print_all(var1);
}

