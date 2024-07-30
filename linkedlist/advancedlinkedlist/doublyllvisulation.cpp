#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node*prev;
    node(int val)
    {
        this->prev=NULL;
        this->next=NULL;
        this->val=val;
    }

};
void display(node *head)
{
    while(head)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void displayrev(node *tail)
{
    while(tail)
    {
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}


int main()
{
    node *a=new node(10);
    node *b=new node(20);
    node *c=new node(30);
    node *d=new node(40);
    
    a->next=b;
    b->next=c;
    b->prev=a;
    c->next=d;
    c->prev=b;
    d->prev=c;
    display(a);
    cout<<" ll in reverse order :"<<endl;
    displayrev(d);

return 0;
}