#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <queue>
using namespace std;
#define pt pair<int,int>
#define ll long long int
vector<vector<pt>>graph;
void add_edge(int u,int v,bool bid,int wt)
{// bid->biderectional
graph[u].push_back({v,wt});
if(bid){
    graph[v].push_back({u,wt});
}

}
    ll prims(int src,int n){
   priority_queue<pt, vector<pt>, greater<pt>> pq;//wt,node
   pq.push({0,src});
   unordered_set<int>visited;
   unordered_map<int,int>m;
   for (int i = 0; i <= n; i++) {
        m[i] = INT_MAX;
    }

   m[src]=0;
   int totalcount=0;
   int result=0;
   vector<int>parent(n+1);
   while(!pq.empty()&&totalcount<n){
    auto curr =pq.top();
    pq.pop();
    if(visited.count(curr.second)){
        continue;
    }
    else{
        totalcount++;
        result+=curr.first;
    for(auto neighbours:graph[curr.second]){
        if(!visited.count(neighbours.first)&& m[neighbours.first]>neighbours.second){

        }
    }
    }
   }
    }
int minCostToSupplyWater(int n, vector<int>& wells, vector<vector<int>>& pipes) {
    graph.resize(n + 1, vector<pair<int, int>>());  // n+1 for one-based indexing

    // Add virtual node 0 connecting to all houses with well costs
    for (int i = 1; i <= n; ++i) {
        add_edge(0, i, true, wells[i - 1]);
    }

    // Add all the pipes
    for (const auto& pipe : pipes) {
        add_edge(pipe[0], pipe[1], true, pipe[2]);
    }

    // Start Prim's algorithm from the virtual node 0
    return prims(0, n);
}
int main()
{
    
int n=3;
graph.resize(n+1,vector<pt>());
vector<int>wells={1,2,2};
vector<vector<int>>pipes={{1,2,1},{2,3,1}};
return 0; 
}