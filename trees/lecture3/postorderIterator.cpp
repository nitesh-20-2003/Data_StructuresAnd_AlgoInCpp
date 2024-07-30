//build a stack and vector just push left than right and than rev the vector to get postorder
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
stack<node*>st;
vector<int>ans;
st.push(n);
while(st.size()>0)//here ans store likes root->left->right than reverse ans to get postorder as : right->left->root
{
    node*temp=st.top();
    st.pop();
    ans.push_back(temp->val);
     if(temp->left)st.push(temp->left);
    if(temp->right)st.push(temp->right);

}
for(int i=ans.size()-1;i>=0;i--)cout<<ans[i]<<" ";
return 0;
}

