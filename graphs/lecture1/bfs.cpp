#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
#include<algorithm>
vector<list<int>>graph;
using namespace std;

unordered_set<int>visited;
int v;//nmbeer of vertices
void  add_edge(int src,int dest,bool bi_dir=true)
{
    graph[src].push_back(dest);
    if(bi_dir)
    graph[dest].push_back(src);
}

void bfs(int src,int dest,vector<int>&dist)
{
queue<int>q;
 visited.clear();
 dist.resize(v,INT_MAX);
 dist[src]=0;
 q.push(src);
 while(! q.empty())
 {
    int curr=q.front();
    q.pop();
   for(auto neighbour :graph[curr])
   {
    if(! visited.count(neighbour))
    {
        q.push(neighbour);
        visited.insert(neighbour);
        dist[neighbour]=dist[curr]+1;
    }
   }
 }
}
int main()
{
    cin>>v;
    graph.resize(v,list<int>());

    int e;
    cin>>e;
    visited.clear();
    vector<int>dist;
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
   
    bfs(x,y,dist);
    for(auto ele: dist)
    cout<<ele<<endl;
    return 0;
}
