#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    
    // Base case: when the subarray length is 1
    for (int i = 0; i < n; i++) {
        dp[i][i] = x[i];
    }

    // Fill the DP table for all subarray lengths
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            dp[i][j] = max(x[i] - dp[i + 1][j], x[j] - dp[i][j - 1]);
        }
    }

    // The first player's maximum possible score
    ll totalSum = accumulate(x.begin(), x.end(), 0LL);
    ll firstPlayerScore = (totalSum + dp[0][n - 1]) / 2;

    cout << firstPlayerScore << endl;

    return 0;
}
