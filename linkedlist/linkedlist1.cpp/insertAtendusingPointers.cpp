#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class node//Linked list code
{
     public:
 int val;
 node* next;
 node(int val)
 {
    this->val=val;
    this->next=NULL;
 }
};
 void insertAtend(node*head,node*insert)
 {
    node *temp=head;
    while((temp->next)!=NULL)
    {
        temp=temp->next;
    }
    temp->next=insert;

 }
int main()
{
node *a=new node(10);
node *b=new node(20);
node *c=new node(30);
node *d=new node(40);
node*e=new node(50);
a->next=b;
b->next=c;
c->next=d;
insertAtend(a,e);//pass head node,and value to inserted;
node *temp=a;
while(temp!=NULL)
{
    cout<<temp->val<<" ";
    temp=temp->next;
}
return 0;
}