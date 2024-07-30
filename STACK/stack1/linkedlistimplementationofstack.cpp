#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node *next;
    node( int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class Stack
{
    node *head=NULL;
    int s=0;
    public:
    
    void push(int val)
    {
        node *t=new node(val);
    t->next=head;
    head=t;
    s++;
    }
    void pop()
    {
        if(s==0)
        {
            cout<<"cannot remove element as stack in empty"<<endl;
            return;
        }
        head=head->next;
        s--;
    }
   int size()
   {
    return s;
    }
    int top()
    {
         if(s==0)
        {
            cout<<"cannot get element as stack in empty"<<endl;
            return -1;
        }
        else 
        return head->val;
    }
    void display()
    {
        node *temp=head;
        while(temp)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Stack s;
    s.pop();
    s.size();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.pop();
    s.display();
return 0;
}