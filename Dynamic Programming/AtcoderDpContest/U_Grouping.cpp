#include <bits/stdc++.h>
using namespace std;

// Type Aliases
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vvll vector<vll>

// Macros
#define rep(i, e) for (int i = 0; i < (e); ++i)

// Constants
const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// DP and precomputed sums
vll dp(1 << 16, -1);       // use -1 to signify uncomputed states
vll sums(1 << 16, 0);

// Compatibility sum for a subset
ll cal(const vvll &compat, int mask) {
    ll ans = 0;
    for (int i = 0; i < 16; ++i) {
        for (int j = i+1; j < 16; ++j) {
            if ((mask & (1 << i)) && (mask & (1 << j))) {
                ans += compat[i][j];
            }
        }
    }
    return ans;
}

// Precompute sums for all subsets
void precompute(const vvll &compat, int n) {
    for (int mask = 1; mask < (1 << n); ++mask) {
        sums[mask] = cal(compat, mask);
    }
}

// DP function to compute max sum using subset `mask`
ll f(const vvll &compat, int mask) {
    if (mask == 0) return 0;
    if (dp[mask] != -1) return dp[mask];

    ll ans = 0;
    for (int g = mask; g != 0; g = (g - 1) & mask) {
        ans = max(ans, sums[g] + f(compat, mask ^ g));
    }

    return dp[mask] = ans;
}

void solve() {
    int n;
    cin >> n;
    vvll a(n, vll(n));
    rep(i, n) rep(j, n) cin >> a[i][j];

    precompute(a, n);
    cout << f(a, (1 << n) - 1) << '\n';
}

int main() {
    fastio;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
