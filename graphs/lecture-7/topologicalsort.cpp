#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

vector<list<int>> graph;
int Vertices;

void add_edge(int src, int dest, bool bi_dir = false) {
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src); // Not needed for DAG
    }
}

void topobfs(int v) {
    // Kahn's Algorithm for Topological Sort
    vector<int> indegree(v, 0);

    // Calculate indegree of each vertex
    for (int i = 0; i < v; i++) {
        for (auto neighbour : graph[i]) {
            indegree[neighbour]++;
        }
    }

    // Push nodes with indegree 0 into the queue
    queue<int> q;
    for (int i = 0; i < v; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topo_order; // To store topological order

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topo_order.push_back(node);

        for (auto neighbour : graph[node]) {
            indegree[neighbour]--; // Reduce indegree of neighbors
            if (indegree[neighbour] == 0) {
                q.push(neighbour);
            }
        }
    }

    // Check if topological sort is possible (graph is a DAG)
    if (topo_order.size() != v) {
        cout << "The graph has a cycle. Topological sort is not possible." << endl;
    } else {
        cout << "Topological Order: ";
        for (int node : topo_order) {
            cout << node << " ";
        }
        cout << endl;
    }
}

int main() {
    cin >> Vertices;
    graph.resize(Vertices);

    int edge;
    cin >> edge;

    while (edge > 0) {
        int src, dest;
        cin >> src >> dest;
        add_edge(src, dest, false); // Directed edge
        edge--;
    }

    topobfs(Vertices);

    return 0;
}
