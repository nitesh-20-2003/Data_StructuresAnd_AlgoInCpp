#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
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
bool dfs(int curr,int end)
{
    if(curr==end )return true;
    visited.insert(curr);
    for(auto neigbour: graph[curr])
    {
        if(! visited.count(neigbour)){
            bool result=dfs(neigbour,end);
            if(result)return true;
        }
    }
    return false;
  
}

bool any_path(int src,int dest)
{
    return dfs(src,dest);
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
    int x,y;
    cin>>x>>y;
   
    cout<<any_path(x,y);
    return 0;
}