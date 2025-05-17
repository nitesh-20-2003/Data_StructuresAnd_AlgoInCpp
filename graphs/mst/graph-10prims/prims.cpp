#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;
#define pt pair<int, int>
// For weighted graph we need to add weight also in the graph
vector<vector<pair<int, int>>> graph;

void add_edge(int u, int v, bool bidir, int wt) {
    graph[u].push_back({v, wt});
    if (bidir) {
        graph[v].push_back({u, wt});
    }
}

long long prims(int src, int n) {
    priority_queue<pt, vector<pt>, greater<pt>> pq;
    pq.push({0, src});
    vector<int> parent(n + 1);  // n+1 in case of one-based indexing we  made this to track the parent of each node
    unordered_map<int, int> m;// 1st represent node 2nd wt

    for (int i = 0; i <= n; i++) {
        m[i] = INT_MAX;
    }
    unordered_set<int> visited;
    m[src] = 0;
    int totalcount = 0;  // 0->n-1, denotes the number of edges while calculating mst
    int result = 0;      // sum of weights

    while (totalcount < n-1 && !pq.empty()) {
        pt curr = pq.top();
        pq.pop();

        if (visited.count(curr.second)) {
            continue;
        }

        visited.insert(curr.second);
        totalcount++;
        result += curr.first;

        for (auto neighbours : graph[curr.second]) {
            if (!visited.count(neighbours.first) && m[neighbours.first] > neighbours.second) {
                pq.push({neighbours.second, neighbours.first});
                parent[neighbours.first] = curr.second;
                m[neighbours.first] = neighbours.second;
            }
        } 
    }
    
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    graph.resize(n + 1, vector<pair<int, int>>());  // n+1 for one-based indexing

    for (int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edge(u, v, true, wt);
    }

    int src;
    cin >> src;
    cout << prims(src, n) << endl;
    return 0;
}
