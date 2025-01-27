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
    queue<pair <node*,int>>q;
    int n=0;
    q.push({root,n});
    unordered_map<int,int>mp;
    while(q.size()>0)
    {
       auto temp=q.front();
      
       mp.insert({temp.first->val,temp.second});
       cout<<" ";
       q.pop() ;
       if(temp.first->left) q.push({temp.first->left,temp.second+1});
       
       if(temp.first->right) q.push({temp.first->right,temp.second+1});
       
       
    }
      for (const auto& pair :mp) {
        std::cout << pair.first << ": " << pair.second << std::endl;
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