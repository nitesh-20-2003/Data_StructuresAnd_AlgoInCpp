#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
node *next;
node(int val)
{
    this->next=NULL;
    this->val=val;
}
};
class que{
  node *front;
  node *rear;
    int size;
    public:
    que()
    {
        front=rear=NULL;
        size=0;
    }
    void push(int val)
    {
         node *temp=new node(val);
        if(size==0)
        {
            front=rear=temp;
            size++;
            return;
        }
        rear->next=temp;
        rear=temp;
        size++;
    }
    void pop()
    {
        if(size==0)
        {cout<<"queue is empty " <<endl;
        return ;}
        front =front->next;
        size--;
    }
    int  fron()
    {
        return front->val;
    }
    int rea(){
        return rear->val;
    }
    void display()
    {
        node *temp=front;
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
que q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
q.display();
cout<<" pop operation :"<<endl;
q.pop();
q.display();
cout<<"value at front :"<<q.fron()<<endl;
cout<<" value at rear/back :"<<q.rea()<<endl;
return 0;
}