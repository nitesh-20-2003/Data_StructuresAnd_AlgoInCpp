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

 void display(node *head)
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }
 node* reversell(node* &l)
    {
        node* prev=NULL;
       node*Next=NULL;
        node* curr=l;
        while(curr!=NULL)
        {
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    node* reverseBetween(node* &head, int left, int right) 
    {
        if(head==NULL||head->next==NULL)return head;
        node*a=NULL;
          node*b=NULL;
        node*c=NULL;
        node*d=NULL;
       node* temp=head;
        int n=1;
        while(temp!=NULL)
        {
            if(n==left-1)a=temp;
            if(n==left)b=temp;
            if(n==right)c=temp;
            if(n==right+1)d=temp;
            temp=temp->next;
            n++;
        }
        if(a) a->next=NULL;
       if(c) c->next=NULL;
        c=reversell(b);
        if(a)a->next=c;
         b->next=d;
         display(head);
       if(a) return head;
      else  return c;
    }
int main()
{
node *a=new node(10);
node *b=new node(20);
node *c=new node(30);
node *d=new node(40);
a->next=b;
b->next=c;
c->next=d;
display(a);
 node *temp=a;
        while(temp &&temp->next)
        {
            reverseBetween(temp,1,2);
            for(int i=1;temp&&i<=2;i++) temp=temp->next;
        }
        
return 0;
}