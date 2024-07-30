#include<iostream>
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
    node a(10);
    node b(20);
    node c(30);
    node d(40);
    a.next=&b;
    b.next=&c;
    c.next=&d;
node temp=a;
cout<<" value of the list :"<<endl;
while(1)
{
    cout<<temp.val;
    cout<<" ";
    if(temp.next==NULL)break;
    temp=*(temp.next);
}
return 0;
}