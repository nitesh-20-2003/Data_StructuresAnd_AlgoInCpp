#include<bits/stdc++.h>
using namespace std;
class node{
public:
int val;
node *left;
node *right;
node(int val)
{
    this->val=val;
    this->left=NULL;
    this->right=NULL;

}
};
int main()
{
node *a=new node(1);
node *b=new node(2);
node *c=new node(3);
node *d=new node(4);
node *e=new node(5);
node *f=new node(6);
node *g=new node(7);
node *h=new node(8);
a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->right=f;
e->left=g;
g->right=h;
queue<int,int>q;//1st represent level and second represent the val
return 0;
}