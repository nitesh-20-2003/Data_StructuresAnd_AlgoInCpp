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
void leftboundary(node*root)
{
    if(root==NULL)return;
    if(root->left==NULL&&root->right==NULL)return;//condition for leaf nodes
    cout<<root->val<<" ";
    leftboundary(root->left);
    if(root->left==NULL)leftboundary(root->right);

}
void leafboundary(node *root)
{
    if(root==NULL)return;
    if(root->left==NULL&&root->right==NULL)
    {cout<<root->val<<" ";
    return;
    }
    leafboundary(root->left);
    leafboundary(root->right);
}
void rightboundary(node*root)
{
    if(root==NULL)return;
    if(root->left==NULL&&root->right==NULL)return;
    rightboundary(root->right);
    if(root->left==NULL)rightboundary(root->left);
    cout<<root->val<<" ";//to print in anti -clockwise call ke baad kam 
    

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
node *g=new node(80);
n->left=a;
n->right=c;
a->left=b;
a->right=d; 
c->left=e;
c->right=g;
g->left=f;
leftboundary(n);
cout<<endl;
leafboundary(n);
cout<<endl;
rightboundary(n->right);
return 0;
}