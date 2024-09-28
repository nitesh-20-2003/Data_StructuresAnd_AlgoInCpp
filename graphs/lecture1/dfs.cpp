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

bool dfs(int curr, int dest) {
    // Print the current node and its neighbors
    cout << "Visiting node " << curr << " with neighbors: ";
    for (auto neighbor : graph[curr]) {
        cout << neighbor << " ";
    }
    cout << endl;

    if (curr == dest) return true;  // Found the destination
    visited.insert(curr);  // Mark current node as visited

    for (auto neighbor : graph[curr]) {
        if (!visited.count(neighbor)) {
            if (dfs(neighbor, dest)) return true;  // Recursively visit neighbors
        }
    }
    return false;  // No path found
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
    if (dfs(x, y)) {
        cout << "Path exists from " << x << " to " << y << endl;
    } else {
        cout << "No path exists from " << x << " to " << y << endl;
    }

    return 0;
}
