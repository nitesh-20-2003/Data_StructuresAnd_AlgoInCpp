#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
#include<algorithm>
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
void topobfs(int v)
{
    // kahn algo
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++){
        cout<<i<<"->";
        for(auto neighbour: graph[i]){
            cout<<neighbour;
            // i->neighbour
            indegree[neighbour]++;
            
        }
        cout<<endl;
    }
    queue<int>q;
    unordered_set<int>visited;
      for(int i=0;i<v;i++){
       if(indegree[i]==0)
       {
            q.push(i);
            visited.insert(i);

       }
    }
    while(!q.empty()){
        auto x=q.front();
        q.pop();
        for(auto neighbour:graph[x])
        {
            if(visited.count(neighbour)!=0)
            {
                indegree[neighbour]--;
              if ( indegree[neighbour]==0){
                q.push(neighbour);
                visited.insert(neighbour);
              }
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
    topobfs(8);
 
    return 0;
}
