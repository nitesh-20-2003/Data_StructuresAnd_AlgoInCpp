#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<climits>
#define ll long long 
using namespace std;
int find(vector<int>&parent,int x){//program to find parent 
    return parent[x]=(parent[x]==x)?x:find(parent,parent[x]);
}
void Union(vector<int>&parent,vector<int>&rank,int a,int b ){
    a=find(parent,a);
    b=find(parent,b);
    if(rank[a]>=rank[b])
    {  
        rank[a]++;
        parent[b]=a;
    }
    else{
              
        rank[b]++;
        parent[a]=b;
    }
}
struct edge{
int src;
int dest;
int wt;

};
bool cmp(edge e1,edge e2){
    return e2.wt>e1.wt;

}
ll kruskal(vector<edge>&input,int n,int m) 
{
    sort(input.begin(),input.end(),cmp);
    vector<int>parent(n+1);
    vector<int>rank(n+1,1);
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    int ans=0;
    int edgecount=0;//n-1 always in tree
    int i=0;
    //bcoz input is sorted so we get min wt edge
    while(edgecount<n && i<input.size()){
        edge curr=input[i];
        int srcparent=find(parent,curr.src);
        int destparent=find(parent,curr.dest);
        if(srcparent!=destparent){
            //include edge as this will not make any cycle
            Union(parent,rank,srcparent,destparent);
            ans+=curr.wt;
            edgecount++;
        }
        i++;// doesn't matter you picked last edge or not ,we still need to go to next edge

    }

}
int main()
{
int n,e;
cout<<"hello";
cin>>n>>e;
vector<edge>v;
while(e--){
int s,d,w;
cin>>s>>d>>w;
v.push_back({s,d,w});
}
cout<<kruskal(v,n,e)<<endl;
return 0;
}