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
        this->val=val;
        this->next=NULL;
    }
};
class dequ
{
node *front;
node*rear;
int size;
public:
dequ()
{
    front=rear=NULL;
    size=0;
}
void addfront(int val)
{
    node *temp=new node(val);
    if(size==0)
    {
        front=rear=temp;
    }
    else
    {
        temp->next=front;
        front->prev=temp;
        front=temp;
    }
    size++;
}
void addrear(int val)
{
    node *temp=new node(val);
    if(size==0)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
    size++;
}
void popfront()
{
    if(size==0)
    {
        cout<<"queue is empty"<<endl;
        return ;
    }
    else{
        front=front->next;
    }
size--;
}
void popback()
{
    if(size==0)
    {
        cout<<"queue is empty"<<endl;
        return ;
    }
    else rear=rear->prev;
    size--;

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
dequ d;
cout<<"adding 5,4,3,2,1 in front"<<endl;
d. addfront(1);
d. addfront(2);
d. addfront(3);
d. addfront(4);
d. addfront(5);
d.display();
cout<<"add in rear/back"<<endl;
d.addrear(6);
d.display();
return 0;
}