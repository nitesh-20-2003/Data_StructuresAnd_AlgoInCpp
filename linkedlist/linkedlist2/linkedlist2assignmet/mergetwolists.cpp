#include<bits/stdc++.h>
using namespace std;
class ListNode//user defined datatype
{
     public:
 int val;
 ListNode* next;
ListNode(int val)
 {
    this->val=val;
    this->next=NULL;
 }};
 void mergeinbetween(ListNode * list1,int a,int b,ListNode * list2)
 {
          ListNode* s=list1;
        ListNode* f=list1;
        for(int i=0;i<=(b-a);i++) f=f->next;
        for(int i=0;i<a-1;i++)
        {
            s=s->next;
            f=f->next;
        }
        s->next=list2;
        ListNode* temp2=list2;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=f->next->next;
        ListNode * temp=list1;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        
 }
int main()
{
ListNode *a=new ListNode(0);
ListNode *b=new ListNode(1);
ListNode *c=new ListNode(2);
a->next=b;
b->next=c;
ListNode *d=new ListNode(100000);
ListNode *e=new ListNode(100001);
ListNode *f=new ListNode(100002);
ListNode *g=new ListNode(100003);
d->next=e;
e->next=f;
f->next=g;
mergeinbetween(a,1,1,d);
return 0;
}