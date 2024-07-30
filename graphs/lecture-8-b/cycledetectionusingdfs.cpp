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
bool dfs(int src,int parent,unordered_set<int>&vis)
{
    vis.insert(src);
    for(auto neighbours:graph[src])
    {
       if( (vis.count(neighbours)!=0)&&neighbours=parent)
        {
            return true;
            //cycle detected
        }

        if((!vis.count(neighbours)!=0)){
            dfs(neighbours,src,vis);
        }
    }
  
}
bool has_cycle(){
    unordered_set<int>visited;
    bool result=false;
    for(int i=0;i<v;i++){
        if(!visited.count(i))
        {
            result=dfs(i,-1,visited);
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