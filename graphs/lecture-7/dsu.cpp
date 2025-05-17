#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Find function with path compression
int find(vector<int>& parent, int x) {
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}

// Union function with rank optimization
void Union(vector<int>& parent, vector<int>& rank, int a, int b) {
    a = find(parent, a);
    b = find(parent, b);

    if (a != b) {  // Only merge if they are in different sets
        if (rank[a] > rank[b]) {
            parent[b] = a;
        } 
        else if (rank[a] < rank[b]) {
            parent[a] = b;
        } 
        else {
            parent[b] = a;
            rank[a]++;
        }
    }
}


int main() {
    int n, m;
    // n -> number of elements
    // m -> number of queries
    cin >> n >> m;

    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 0);

    // Initialize each element as its own parent
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }

    while (m--) {
        string str;
        cin >> str;
        if (str == "union") {
            int x, y;
            cin >> x >> y;
            Union(parent, rank, x, y);
        } 
        else if (str == "find") {
            int x;
            cin >> x;
            cout << find(parent, x) << endl;
        }
    }

    return 0;
}
class DSU {
public:
    vector<int> parent, rank;
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 1);
        for (int i = 0; i < n; i++) parent[i] = i;
    }
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX == rootY) return;
        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
    bool connected(int x, int y) {
        return find(x) == find(y);
    }
};