#include<bits/stdc++.h>
using namespace std;
class node{
public:
int val;
node*left;
node*right;
node(int val)
{
    this->val=val;
    this->left=NULL;
    this->right=NULL;
}
};
void nthlevel(node *head,int target,int curr)
{
    if(head==NULL)return ;
    if(curr==target)
    {
    cout<<head->val<<" ";
    return ;
    }
   nthlevel(head->left,target,curr+1);
   nthlevel(head->right,target,curr+1);
}
void nthlevelprintRev(node *head,int target,int curr)
{
  if(head==NULL)return ;
    if(curr==target)
    {
    cout<<head->val<<" ";
    return ;
    }
    nthlevelprintRev(head->right,target,curr+1);
    nthlevelprintRev(head->left,target,curr+1);
}
void print(int n,node *head){
    for(int i=0;i<n;i++)
    {
        // nthlevel(head,i,0);
        cout<<endl;
        nthlevelprintRev(head,i,0);
    }
}

int main()
{
node *n=new node(10);
node *a=new node(20);
node *c=new node(30);
node *b=new node(40);
node *d=new node(50);
node *e=new node(60);
node *f=new node(70);
n->left=a;
n->right=c;
a->left=b;
a->right=d;
c->left=e;
c->right=f;
print(3,n);
return 0;
}