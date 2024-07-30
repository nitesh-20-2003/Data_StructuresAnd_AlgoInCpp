#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<queue>
#include<unordered_map>
#include<unordered_set>
using namespace std;
#define pt pair<int,int>
#define ll long long int

vector<vector<pt>>graph;

void add_edge(int u,int v,int w, bool bid){
    graph[u].push_back({v,w});
    if(bid){
        graph[v].push_back({u,w});
    }
}

// dijsthra algo
unordered_map<int,int> dij(int src,int n){// o(vlogv +eloge)
    priority_queue<pt,vector<pt>,greater<pt>>pq;// 1st wt 2nd node
    pq.push({0,src});
    
    unordered_map<int,int>m;// here 1st->node 2nd-> dist from src
    for(int i=0;i<n;i++)m[i]=INT_MAX;
    m[src]=0;
    
    unordered_set<int>visited;
    
    while(!pq.empty()){
        auto curr= pq.top();
        pq.pop();
        
        if (visited.count(curr.second)) 
        {
            continue;
        }
        
        visited.insert(curr.second);
        
        for (auto neighbours : graph[curr.second]) {
            if(!visited.count(neighbours.first)&&m[curr.second]+neighbours.second<m[neighbours.first]) {
                m[neighbours.first]=m[curr.second]+neighbours.second;
                pq.push({m[curr.second]+neighbours.second,neighbours.first});
            }
        }
    }
    
    return m;
}

int main() {
    int e,v;
    cin>>v>>e;
    graph.resize(v);
    
    while(e--){
        int u,z,w;
        cin>>u>>z>>w;
        add_edge(u,z,w,true);
    }
    
    int src;
    cin>>src;
    
    unordered_map<int,int>mp= dij(src,v);
    
    int dist;
    cin>>dist;
    
    for(auto ele:mp){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    
    return 0;
}
