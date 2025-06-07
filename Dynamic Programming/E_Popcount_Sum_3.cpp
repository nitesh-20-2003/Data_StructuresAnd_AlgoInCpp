#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353

// dp[pos][count_of_1s][tight]
long long dp[65][65][2];

// Digit DP: return number of such numbers
long long countDP(const vector<int> &bin, int pos, int setBits, bool tight, int k) {
    if (setBits > k) return 0;
    if (pos == bin.size()) return setBits == k;

    if (dp[pos][setBits][tight] != -1) return dp[pos][setBits][tight];

    int limit = tight ? bin[pos] : 1;
    long long res = 0;

    for (int digit = 0; digit <= limit; digit++) {
        bool newTight = tight && (digit == limit);
        res = (res + countDP(bin, pos + 1, setBits + digit, newTight, k)) % MOD;
    }

    return dp[pos][setBits][tight] = res;
}

long long sumDP(const vector<int> &bin, int pos, int setBits, bool tight, long long valueSoFar, int k) {
    if (setBits > k) return 0;
    if (pos == bin.size()) return setBits == k ? valueSoFar % MOD : 0;

    long long res = 0;
    int limit = tight ? bin[pos] : 1;

    for (int digit = 0; digit <= limit; digit++) {
        bool newTight = tight && (digit == limit);
        long long newValue = (valueSoFar * 2 + digit) % MOD;
        res = (res + sumDP(bin, pos + 1, setBits + digit, newTight, newValue, k)) % MOD;
    }

    return res;
}

long long solve(long long n, int k) {
    vector<int> bin;
    while (n > 0) {
        bin.push_back(n % 2);
        n /= 2;
    }
    reverse(bin.begin(), bin.end());

    memset(dp, -1, sizeof(dp));
    return sumDP(bin, 0, 0, true, 0, k);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;
        cout << solve(n, k) << "\n";
    }
    return 0;
}
