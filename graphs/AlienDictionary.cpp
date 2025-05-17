#include <bits/stdc++.h>
using namespace std;

vector<int> topoSort(int n, vector<vector<int>>& adj) {
    vector<int> indegree(n, 0);
    for (int u = 0; u < n; u++) {
        for (int v : adj[u]) {
            indegree[v]++;
        }
    }

    queue<int> q;
    for (int u = 0; u < n; u++) {
        if (indegree[u] == 0) {
            q.push(u);
        }
    }

    vector<int> topo_order;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        topo_order.push_back(u);

        for (int v : adj[u]) {
            indegree[v]--;
            if (indegree[v] == 0) {
                q.push(v);
            }
        }
    }

    if (topo_order.size() != n) {
        return {}; // Graph has a cycle, return empty vector
    }
    return topo_order;
}

string alienOrder(vector<string>& words) {
    unordered_set<char> uniqueChars;
    for (const string& word : words) {
        for (char c : word) {
            uniqueChars.insert(c);
        }
    }

    int numChars = uniqueChars.size();
    unordered_map<char, int> charToIndex;
    unordered_map<int, char> indexToChar;
    int index = 0;
    for (char c : uniqueChars) {
        charToIndex[c] = index;
        indexToChar[index] = c;
        index++;
    }

    vector<vector<int>> adj(numChars);

    for (int i = 0; i < words.size() - 1; i++) {
        string word1 = words[i];
        string word2 = words[i + 1];
        int minLen = min(word1.length(), word2.length());

        for (int j = 0; j < minLen; j++) {
            if (word1[j] != word2[j]) {
                adj[charToIndex[word1[j]]].push_back(charToIndex[word2[j]]);
                break; // Only consider the first differing character
            }
            //Handle case where word1 is a prefix of word2
            if(j == minLen -1 && word1.length() > word2.length()){
                return ""; //invalid ordering. ex. "abc" and "ab"
            }
        }
    }

    vector<int> sortedOrder = topoSort(numChars, adj);
    if (sortedOrder.empty()) {
        return ""; // Cycle detected
    }

    string result = "";
    for (int i : sortedOrder) {
        result += indexToChar[i];
    }
    return result;
}

int main() {
    vector<string> arr = {"baa", "abcd", "abca", "cab", "cad"};
    cout << alienOrder(arr) << endl;

    vector<string> arr2 = {"wrt", "wrf", "er", "ett", "rftt"};
    cout << alienOrder(arr2) << endl;

    vector<string> arr3 = {"z", "x", "z"};
    cout << alienOrder(arr3) << endl;

    vector<string> arr4 = {"abc", "ab"};
    cout << alienOrder(arr4) << endl;
    
    return 0;
}