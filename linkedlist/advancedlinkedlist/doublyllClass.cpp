
#include<bits/stdc++.h>
using namespace std;
class node//user defined datatype
{
     public:
 int val;
 node* next;
 node *prev;
 node(int val)
 {
    this->val=val;
    this->next=NULL;
    this->prev=NULL;
 }};
 class linkedlist//user defined data structure
 {
    public:
    node *head;
    node *tail; 
    //NULL KOI VAL NAHI HOTA AND KOI NEXT NAHI HOTA;
    int size;
linkedlist()
{
head=tail=NULL;
  size=0;
}
    void insertAtend(int val)
    {
        node *temp=new node(val);
      if(size==0) head=tail=temp;
       else {
        node *m=head;
        while(m->next!=NULL)
        {
          m=m->next;
        }
        m->next=temp;
        temp->prev=m;
        tail=temp;
       }
    size++;
    }
    void insertAthead(int val)
    {
             node *temp=new node(val);
        if(size==0) head=tail=temp;
        else 
        {
           temp->next=head;
           head->prev=temp;
           head=temp;
        }
    size++;
    }
void  insertat(int idx,int val)
{
  node *temp=head;
  node *t=new node(val);
  int i=0;
  while(i<idx-1)
  {
    temp=temp->next;
    i++;
  }//i=idx-1;
  t->next=temp->next;
  temp->next=t;
  temp->next->prev=t;
  t->prev=temp;
  size++;
}
   int  getval(int idx)
    {
        if(idx==1)return head->val;
        else if(idx==size)return tail->val;
        else if(idx<1||idx>size)cout<<"invalid";
        else if(idx<size/2)
        {
            //tranverse upto that idx;
            int i=1;
            node *temp=head;
            while(i<idx-1)
            {
                temp=temp->next;
                i++;
            }//i=idx;
            return temp->val;
        }
        else
        {
            node * temp=tail;
           
            for(int i=1;i<=size-idx;i++)
            {
                temp=temp->prev;
            }
            return temp->val;
        }
    }
  void deletathead()
  {
    if(size==0)cout<<"invalid as list is empty";
    else if(size>1)
    {
        head->next->prev=NULL;
        head=head->next;
    }
    else head=tail=NULL;
    size--;
  }
  void deletattail()
  {
    if(size==0)head=tail=NULL;
    else{//t.c.=o(1)
    node *temp=tail->prev;
    temp->next=NULL;
    tail=temp;
    }
    size--;
  }
  void deletatidx(int idx)
  {
    if(idx<0||idx>size)
    {cout<<"invalid";
    return;
    }
    else if(idx==0)deletathead();
    else if(idx==size)deletattail();
    else 
    {
      node *temp=head;
      int i=1;
      while(i<idx-1)
      {
        i++;
        temp=temp->next;
      }
      temp->next=(temp->next)->next;
      temp->next->prev=temp;
    }
      size--;

    }
 
    void display()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }
    void displayrev()
    {
        node * n=tail;
        while(n!=NULL)
        {
            cout<<n->val<<" ";
            n=n->prev;
        }
        cout<<endl;
    }


 };
 int main()
 {
    linkedlist ll;
    ll.insertAtend(10);
    ll.insertAtend(20);
    ll.insertAtend(30);
    ll.insertAtend(40);
    ll.display();
    cout<<" inserting 5 at head:"<<endl;
    ll.insertAthead(5);
    ll.display();
    cout<<"inserting 23 at 4 idx:"<<endl;
    ll.insertat(3,23);
     ll.display();
     cout<<"deleting 1st node at head"<<endl;
     ll.deletathead();
     ll.display();
     cout<<"delete  at tail"<<endl;
     ll.deletattail();
     ll.display();
     cout<<" delete at 3 idx:"<<endl;
     ll.deletatidx(3);
     ll.display();
     ll.insertAtend(80);
      ll.insertAtend(70);
       ll.insertAtend(60);
       ll.display();
     cout<<" value at 5 idx is : "<<ll.getval(5);
     cout<<endl;
     cout<<3/5;
 }