#include<bits/stdc++.h>
using namespace std;
class node
{
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
void ans(node *root,int key1,int key2,int &d)
{
    if(root==NULL)return ;
    if(key1>key2)
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

return 0;
}