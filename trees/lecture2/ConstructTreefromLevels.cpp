//construct a tree from levels given in an array/vector
/*in the given approcah INT_MIN->NULL*/
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

void display(node *head)
{
    if(head==NULL)return ;
    cout<<head->val<<" ";
    display(head->left);
     display(head->right);
}
int main()
{
int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};
int n=sizeof(arr)/sizeof(arr[0]);
node*root=new node(arr[0]);
int i=1;
int j=2;
queue<node*>q;
q.push(root);
while(q.size()>0&&i<n)
{
    node*temp=q.front();
    q.pop();
    node *l;
    node*r;
    if(arr[i]!=INT_MIN)
    l=new node(arr[i]); 
    else l=NULL;
       if(j!=n&&arr[j]!=INT_MIN)
    r=new node(arr[j]);
    else r=NULL;
    temp->left=l;
    temp->right=r;
    if(l!=NULL)q.push(l);
    if(r!=NULL)q.push(r);
    i+=2;
    j+=2;
}
  display(root);

return 0;}
