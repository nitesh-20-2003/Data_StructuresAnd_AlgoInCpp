#include<bits/stdc++.h>
using namespace std;
class node//user defined datatype
{
     public:
 int val;
 node* next;
 node(int val)
 {
    this->val=val;
    this->next=NULL;
 }};
 class linkedlist//user defined data structure
 {
    public:
    node *head;
    node *tail; //NULL KOI VAL NAHI HOTA AND KOI NEXT NAHI HOTA;
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
        // else 
        // {
        //     tail->next=temp;
        //    tail=temp;
        // }
       else {node *m=head;
        while(m->next!=NULL)
        {
          m=m->next;
        }
        m->next=temp;
        tail=m;}
    size++;
    }
    void insertAthead(int val)
    {
             node *temp=new node(val);
        if(size==0) head=tail=temp;
        else 
        {
           temp->next=head;
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
  size++;
}
   int  getval(int idx)
    {
        if(idx==0)return head->val;
        else if(idx==size-1)return tail->val;
        else if(idx<0||idx>=size)cout<<"invalid";
        else
        {
            //tranverse upto that idx;
            int i=0;
            node *temp=head;
            while(i<idx)
            {
                temp=temp->next;
                i++;
            }//i=idx;
            return temp->val;
        }
    }
  void deletathead()
  {
    if(size==0)cout<<"invalid as list is empty";
    else if(size>1)head=head->next;
    else head=tail=NULL;
    size--;
  }
  void deletattail()
  {
    node *temp=head;
    if(size==0)head=tail=NULL;
    while(temp->next!=tail)
    {
      temp=temp->next;
    }//temp tail-1 ind pe aa chuka hai
    temp->next=NULL;
    tail=temp;
    size--;
  }
  void deletatidx(int idx)
  {
    if(idx<0||idx>=size)cout<<"invalid";
    else if(idx==0)deletathead();
    else if(idx==size-1)deletattail();
    else 
    {
      node *temp=head;
      int i=0;
      while(i<idx-1)
      {
        i++;
        temp=temp->next;
      }
      temp->next=(temp->next)->next;
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

 };
 int main()
 {
    linkedlist ll;//ll={ }
    cout<<"intially size of ll is 0"<<endl;
    ll.display();
    ll.insertAtend(10);//ll={10};
    ll.insertAtend(20);
    // cout<<"inserting 60 at head :"<<endl;
    ll.insertAthead(60);
    // cout<<"inserting 50 at 3 idx"<<endl;
    ll.insertat(2,50);
  cout<<"deleting the head node :"<<endl;
    ll.deletathead();
    ll.display();
    cout<<"delete at tail of the ll :"<<endl;
    ll.deletattail();
    ll.display();
  cout<<"ll after deleting node at 2 idx is:"<<endl;
  ll.deletatidx(1);
  ll.display();
 }