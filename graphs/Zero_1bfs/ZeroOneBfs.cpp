#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

const int INF = 1e9;

void zeroOneBFS(int start, vector<vector<pii>>& adj, vector<int>& dist) {
    int n = adj.size();
    dist.assign(n, INF);
    deque<int> dq;

    dist[start] = 0;
    dq.push_front(start);

    while (!dq.empty()) {
        int node = dq.front();
        dq.pop_front();

        for (auto [neighbor, weight] : adj[node]) {
            if (dist[node] + weight < dist[neighbor]) {
                dist[neighbor] = dist[node] + weight;
                if (weight == 0) dq.push_front(neighbor);
                else dq.push_back(neighbor);
            }
        }
    }
}
