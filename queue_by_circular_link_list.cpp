#include<iostream>
#include<stdio.h>
using namespace std;
class node
{
  public:
  int info;
  node *next;
};
node* create(int data)
{
 node *ptr=new node;
 ptr->info=data;
 ptr->next=NULL;
}
void display(node *head)
{
 node *ptr=head->next;
 do{
  cout<<" "<<ptr->info;
  ptr=ptr->next;
}while(ptr!=head);
}
void insert(node *head,int data)
{
  node *p=create(data);
  p->next=head->next;
  head->next=p;
}
void remove(node *head)
{
 node *ptr=head->next;
 do{
   ptr=ptr->next;
  }while(ptr->next->next!=head);
  
  delete ptr->next;
  ptr->next=head;
}
int main()
{
 node *head,*p1,*p2,*p3,*p4;
 head=new node;
 p1=create(10);
 p2=create(20);
 p3=create(30);
 p4=create(40);
 head->next=p1;
 p1->next=p2;
 p2->next=p3;
 p3->next=p4;
 p4->next=head;
 cout<<"queue by circular link list"<<endl;
 display(head);
 cout<<endl;
 insert(head,60);
 cout<<endl;
 cout<<"after insert element :"<<endl;
 display(head);
 cout<<endl;
 remove(head);
 cout<<endl;
 cout<<"after delete element :"<<endl;
 display(head);
 return 0;
}