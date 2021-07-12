#include <stdio.h>
struct self
{
    int x;
    struct self *next;
};

int main()
{
    struct self head,link,tail;
    head.x=5;
    link.x=10;
    tail.x=20;

    head.next=&link;
    link.next=&tail;
    tail.next=&head;

    printf("######## BEFORE CHANGING THE VALUES ######\n");

    printf("head.next->x  %d\n",head.next->x);
    printf("head.next->next->x  %d\n",head.next->next->x);
    printf("head.next->next->next->x  %d\n\n",head.next->next->next->x);

    printf("****** AFTER CHANGING THE VALUES ******\n");

    head.next->x=head.next->next->x=head.next->next->next->x=5;

    printf("head.next->x  %d\n",head.next->x);
    printf("head.next->next->x  %d\n",head.next->next->x);
    printf("head.next->next->next->x  %d\n",head.next->next->next->x);

    return 0;

}
