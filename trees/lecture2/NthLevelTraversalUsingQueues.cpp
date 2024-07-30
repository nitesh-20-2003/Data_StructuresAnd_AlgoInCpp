//BFS->TECHNIQUE
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
void traversal(node*root)//traversal using queue
{
    queue<node*>q;
    q.push(root);
    while(q.size()>0)
    {
       node*temp=q.front();
       cout<<temp->val;
       cout<<" ";
       q.pop() ;
       if(temp->left)
       {
            q.push(temp->left);
       }
       if(temp->right)
       {
            q.push(temp->right);
       }
       
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
traversal(n);
return 0;
}