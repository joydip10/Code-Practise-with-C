#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int data,int n)
{
     struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
     temp1->data=data;
     temp1->next=NULL;
     if(n==1)
     {
         temp1->next=head;
         head=temp1;
         return;
     }
     struct Node* temp2=head;
     int i;
     for(i=0;i<n-2;i++)
     {
         temp2 =temp2->next;
     }
     temp1->next=temp2->next;
     temp2->next=temp1;

}
void Print()
{
    struct Node* temp=head;
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
   Insert(2,1);
   Insert(3,2);
   Insert(4,1);
   Insert(5,2);
   Insert(7,3);
   Insert(6,5);
   Insert(9,7);
   Insert(19,8);
   Print();
}
