#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define pt pair<int, int>
#define ll long long

vector<vector<pt>> graph;

void add_edge(int u, int v, int w, bool bidirectional = true) {
    graph[u].push_back({v, w});
    if (bidirectional) {
        graph[v].push_back({u, w});
    }
}

unordered_map<int, int> dijkstra(int src, int n) 
{
    priority_queue<pt, vector<pt>, greater<pt>> pq;
    unordered_map<int, int> dist;
    unordered_set<int> visited;

    for (int i = 0; i < n; i++) dist[i] = INT_MAX;
    dist[src] = 0;

    pq.push({0, src}); //! {distance, via ->node}

    while (!pq.empty()) {
        auto [d, node] = pq.top();
        pq.pop();

        if (visited.count(node)) continue;
        visited.insert(node);

        for (auto [neigh, weight] : graph[node]) {
            if (!visited.count(neigh) && d + weight < dist[neigh]) {
                dist[neigh] = d + weight;
                pq.push({dist[neigh], neigh});
            }
        }
    }

    return dist;
}

int main() {
    int v, e;
    cin >> v >> e;
    graph.resize(v);

    while (e--) {
        int u, z, w;
        cin >> u >> z >> w;
        add_edge(u, z, w);
    }

    int src;
    cin >> src;

    unordered_map<int, int> distances = dijkstra(src, v);

    for (int i = 0; i < v; i++) 
    {
        cout << "Node " << i << " is at distance: ";
        if (distances[i] == INT_MAX) cout << "INF";
        else cout << distances[i];
        cout << endl;
    }

    return 0;
}
