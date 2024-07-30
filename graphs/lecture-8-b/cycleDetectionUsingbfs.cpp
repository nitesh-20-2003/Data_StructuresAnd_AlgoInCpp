
#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;

unordered_set<int>visited;
int v;//nmbeer of vertices
void  add_edge(int src,int dest,bool bi_dir=true)
{
    
    graph[src].push_back(dest);
    if(bi_dir)
    graph[dest].push_back(src);
}
bool bfs(int src)
{
   unordered_set<int>vis;
   queue<int>q;
   vector<int>par(v,-1);
   q.push(src);
   vis.insert(src);
   while(!q.empty()){
    int curr=q.front();
    q.pop();
        for(auto neighbours:graph[curr]){
            if(vis.count(neighbours)!=0&&par[curr]!=neighbours)
            return true;
            else{
                vis.insert(neighbours);
                par[neighbours]=curr;
                q.push(neighbours);
            }
        }
   }
  
}
bool has_cycle(){
    unordered_set<int>visited;
    bool result=false;
    for(int i=0;i<v;i++){
        if(!visited.count(i))
        {
            result=bfs(i);
            if(result==true) return true;
        }
    }
    return false;
}


int main()
{
    cin>>v;
    graph.resize(v,list<int>());

    int e;
    cin>>e;
    visited.clear();
    while(e>0)
    {

        int src;
        int dest;
        cin>>src>>dest;
        add_edge(src,dest,false);
        e--;
    }
    bool b=has_cycle();
    return 0;
}