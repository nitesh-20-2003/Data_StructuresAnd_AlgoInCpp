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
int main()
{
node *a=new node(10);
node *b=new node(20);
node *c=new node(30);
node *d=new node(40);
a->next=b;
b->next=c;
c->next=d;
node *temp=a;
while(temp!=NULL)
{
    cout<<temp->val<<" ";
    temp=temp->next;
}
return 0;
}