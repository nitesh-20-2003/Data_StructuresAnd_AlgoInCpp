#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

// Find function with path compression
int find(vector<int>& parent, int x) {
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}

// Union function with union by rank
void Union(vector<int>& parent, vector<int>& rank, int a, int b) {
    a = find(parent, a);
    b = find(parent, b);
    if (a == b) return; // Already in the same set

    if (rank[a] > rank[b]) {
        parent[b] = a;
    } else if (rank[a] < rank[b]) {
        parent[a] = b;
    } else {
        parent[b] = a;
        rank[a]++;
    }
}

// Edge structure
struct edge {
    int src;
    int dest;
    int wt;
};

// Comparator to sort edges by weight
bool cmp(edge e1, edge e2) {
    return e1.wt < e2.wt;
}

// Kruskal's Algorithm
ll kruskal(vector<edge>& input, int n, int m) {
    sort(input.begin(), input.end(), cmp); // Sort edges by weight
    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 1);

    // Initialize parent array
    for (int i = 0; i <= n; i++) {
        parent[i] = i;
    }

    ll ans = 0; // Total weight of MST
    int edgecount = 0; // Number of edges in MST
    int i = 0; // Index to iterate through sorted edges

    // Loop until we have n-1 edges in MST
    while (edgecount < n - 1 && i < input.size()) {
        edge curr = input[i];
        int srcParent = find(parent, curr.src);
        int destParent = find(parent, curr.dest);

        if (srcParent != destParent) {
            Union(parent, rank, srcParent, destParent);
            ans += curr.wt;
            edgecount++;
        }
        i++;
    }

    return ans; // Return the total weight of MST
}

int main() {
    int n, e;
    cout << "Enter the number of vertices and edges: ";
    cin >> n >> e;

    vector<edge> v;
    cout << "Enter the edges (source, destination, weight):" << endl;
    for (int i = 0; i < e; i++) {
        int s, d, w;
        cin >> s >> d >> w;
        v.push_back({s, d, w});
    }

    ll mstWeight = kruskal(v, n, e);
    cout << "Weight of Minimum Spanning Tree: " << mstWeight << endl;

    return 0;
}