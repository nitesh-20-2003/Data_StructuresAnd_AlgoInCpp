#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define mod 1000000007

const int INF = 1e9 + 7;
int dp[21][1 << 21];  // Reduce size: n ≤ 20, so 1<<20 is enough

// Bitmask DP function
int f(int i, int mask, int n, vvi &c) {
    if (i == n + 1) return 1;  // Base case: If all persons are assigned
    if (dp[i][mask] != -1) return dp[i][mask];

    int ans = 0;
    for (int w = 1; w <= n; w++) {
        bool available = (mask >> (w - 1)) & 1;  // Check if task `w` is available
        if (available && c[i][w]) {
            ans = (ans + f(i + 1, (mask & (~(1 << (w - 1)))), n, c)) % INF;
        }
    }
    return dp[i][mask] = ans;
}

int main() {
    memset(dp, -1, sizeof(dp));
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vvi c(n + 1, vi(n + 1));
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> c[i][j];

    cout << f(1, (1 << n) - 1, n, c);
    return 0;
}
