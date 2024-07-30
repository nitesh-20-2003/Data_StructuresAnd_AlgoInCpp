#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;

    }
};
class linkedlist
{
    public:
    node*head=NULL;
    int size;
    linkedlist()
    {
        head=NULL;
        size=0;
    }
    void del( int target, node *head)
    {
        this->head=head;
        node *temp=head;
        while(temp->next->val!=target)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }
    void display(node * head)
    {
        this->head=head;
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
node * a=new node(10);
node * b=new node(20);
node * c=new node(30);
node * d=new node(40);
a->next=b;
b->next=c;
c->next=d;
int target=30;
linkedlist ll;
ll.display(a);
cout<<endl;
ll.del(target,a);
ll.display(a);
return 0;
}