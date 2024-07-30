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
int levels(node*head)
{
    if(head==NULL)return 0;
    return 1+max(levels(head->left),levels(head->right));
}
void display(node *head,int target,int curr)//nth level printing
{
    if(head==NULL)return ;
    if(curr==target)cout<<head->val<<" ";//kam
    display(head->left,target,curr+1);//left call
    display(head->right,target,curr+1);//right call
}

void leveltraversal(node*head)
{
    int n=levels(head);
    for(int i=1;i<=n;i++)
    {
        display(head,i,1);
        cout<<endl;
    }
    // cout<<"reversal of tree is :"<<endl;
    // for(int i=1;i<=n;i++)
    // {
    //    nthlevelReverse(head,i,1);
    //     cout<<endl;
    // }
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
leveltraversal(n);
return 0;
}
//result of level wise printing is same for pre-in -post if we call left first 
//while result reverse if we call right first either in pre-in-post.