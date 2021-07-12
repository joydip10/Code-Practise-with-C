#include<stdio.h>
#include<stdlib.h>

struct NODE
{
    int data;
    struct NODE* next;
};
struct NODE* head;
void insert(int x)
{
    struct NODE* temp=(struct NODE*)malloc(sizeof(struct NODE));
    temp->data=x;
    temp->next=NULL;
    //if(head != NULL)temp->next = head;
    head->next=temp;
}
void print()
{
    struct NODE* temp=head;
    printf("List is:     ");
    while(temp!= NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    head=NULL;

    int i,n,p;

    printf("NO. of digits : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER THE NUMBER : ");
        scanf("%d",&p);
        insert(p);
        print();
    }
}
