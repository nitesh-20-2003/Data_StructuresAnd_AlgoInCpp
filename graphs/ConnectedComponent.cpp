#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

vector<list<int>> graph;  // Adjacency list to represent the graph
unordered_set<int> visited;  // Set to keep track of visited nodes
int v;  // Number of vertices

void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}
 void dfs(int node, unordered_set<int>& visited) {
    visited.insert(node);
    for(auto neighbour:graph[node]){
        if(!visited.count(neighbour))dfs(neighbour,visited);
    }
}
int cc(){
    int result=0;
    unordered_set<int>visited;
    for(int i=0;i<v;i++){
        if(visited.count(i)==0){
            result++;
            dfs(i,visited);
        }
    }
}
int main() {
    cin >> v;
    graph.resize(v + 1);  // Resize graph to handle 1-based indexing

    int e;
    cin >> e;
    
    while (e--) {
        int src, dest;
        cin >> src >> dest;
        add_edge(src, dest, false);  // Add edge to the graph
    }

    int x, y;
    cin >> x >> y;

    visited.clear();  // Clear visited set before DFS
    

    return 0;
}
