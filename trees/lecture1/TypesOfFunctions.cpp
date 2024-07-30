#include<bits/stdc++.h>
using namespace std;
int s=0;
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
int display(node *head )//function to display sum of all elements;
{
    if(head==NULL)return 0;
 int sum=head->val+display(head->left)+display(head->right);
 return sum;
}
int size(node *head)//means no. of nodes in a tree.
{
    if(head==NULL)return 0;
    int s=1+size(head->left)+size(head->right);
    return s;
}
int maxi(node*head)
{
  if(head==NULL)return INT_MIN;
  return max(head->val,max(maxi(head->left),maxi(head->right)));
}
int levels(node*head)
{
    if(head==NULL)return 0;
    return 1+max(levels(head->left),levels(head->right));
}
long long  product(node *head)
{
    if(head==NULL)return 1;
    return head->val*product(head->left)*product(head->right);
}
int mini(node *head)
{
    if(head==NULL)return INT_MAX;
    return min(head->val,min(mini(head->left),mini(head->right)));
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
d->right=e;
e->left=f;
cout<<"sum of all nodes is : "<< display(n);
cout<<endl;
cout<<"size of tree is:"<<size(n)<<endl;
cout<<"max value among all nodes  of tree is:"<<maxi(n)<<endl;
cout<<"no of levels in a tree is:"<<levels(n)<<endl;
cout<<"product of elements in the tree is:"<<product(n)<<endl;
cout<<" minimum of elements in tree is :"<<mini(n)<<endl;
return 0;
}