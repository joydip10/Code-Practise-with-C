#include<stdio.h>
#include<conio.h>
struct self_ref
{
    int a;
    struct self_ref *next;
};
int print(struct self_ref a)
{
    if(a.a==8)
        return 0;
    printf("%d ",a.a);
    print(*a.next);
}
int main()
{
    struct self_ref var1,var2,var3,var4;
    var1.a=5;
    var1.next=&var2;
    var2.a=6;
    var2.next=&var3;
    var3.a=7;
    var3.next=&var4;
    var4.a=8;
    print(var1);
    return 0;
}
