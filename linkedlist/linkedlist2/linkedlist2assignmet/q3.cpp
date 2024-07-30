#include<bits/stdc++.h>
using namespace std;
class ListNode
{
     public:
 int val;
ListNode* next;
 ListNode(int val)
 {
    this->val=val;
    this->next=NULL;}
};
void check(ListNode* head, int k) 
    {
        ListNode* temp=head;
        for(int i=1;i<k;i++)//finding kth-1 node from starting
        {
            temp=temp->next;
        }
          ListNode* slow=head;//min itna toh hoyga hi 
//finding k-1 th node from ending
    ListNode* fast=head;
    for(int i=1;i<k+1;i++)
    {
        fast=fast->next;
    }
    while(fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    
    swap(temp->val,slow->val);
   ListNode *t=head;
    while(t!=NULL)
    {
        cout<<t->val<<" ";
        t=t->next;
    }
    }
int main()
{
ListNode *a=new ListNode(10);
ListNode *b=new ListNode(20);
ListNode*c=new ListNode(30);
ListNode*d=new ListNode(40);
ListNode *e=new ListNode(50);
a->next=b;
b->next=c;
c->next=d;
d->next=e;
check(a,2);
return 0;
}