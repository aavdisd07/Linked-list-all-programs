#include<iostream>
#include<stdlib.h>
using namespace std;
 struct node{ 
  int data;
  struct node*next;

 };
 struct node*traversal(struct node*temp){
  while(temp!=NULL){
     cout<<temp->data<<"\t";
     temp=temp->next;
  }
 }
 struct node*insertatfirst(struct node*prev,int x){
   struct node*newnode =(struct node*)malloc(sizeof(struct node));
   newnode ->data=x;
   newnode->next=prev;
  prev=newnode;
 }

 int main()
 {
   struct node*head=(struct node*)malloc(sizeof (struct node));
   head->data=10;
   head->next=NULL;
   cout<<"1->";
   traversal(head);
   head= insertatfirst(head,20);cout<<"\n";
   cout<<"2->";
   traversal(head);
    head= insertatfirst(head,30);cout<<"\n";
   cout<<"3->";
   traversal(head);
    head= insertatfirst(head,40);cout<<"\n";
   cout<<"4->";
   traversal(head);
    head= insertatfirst(head,70);cout<<"\n";
   cout<<"5->";
   traversal(head);

 }
