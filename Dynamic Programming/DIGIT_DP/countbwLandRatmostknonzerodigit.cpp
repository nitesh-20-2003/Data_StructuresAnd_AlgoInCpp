//Count numbers between L and R (inclusive) that have at most K non-zero digits.

#include <bits/stdc++.h>
using namespace std;

int dp[20][2][20]; // pos, tight, count_non_zero

// Digit DP function
int countNumbersWithKNonZero(string &num, int pos, bool tight, int cnt, int K) {
    if (cnt > K) return 0;          // Too many non-zero digits
    if (pos == num.size()) return 1; // Base case: valid number
    
    if (dp[pos][tight][cnt] != -1) return dp[pos][tight][cnt];

    int limit = tight ? num[pos] - '0' : 9;
    int res = 0;

    for (int digit = 0; digit <= limit; ++digit) {
        bool newTight = (tight && (digit == limit));
        res += countNumbersWithKNonZero(num, pos + 1, newTight, cnt + (digit != 0), K);
    }

    return dp[pos][tight][cnt] = res;
}

int solve(string num, int K) {
    memset(dp, -1, sizeof(dp));
    return countNumbersWithKNonZero(num, 0, true, 0, K);
}

// Utility to convert integer to string
string toStr(int x) {
    return to_string(x);
}

// Final function to find answer in range [L, R]
int countInRange(int L, int R, int K) {
    return solve(toStr(R), K) - solve(toStr(L - 1), K);
}

int main() {
    int L = 1, R = 1000, K = 3;
    cout << "Count of numbers with at most " << K << " non-zero digits in range ["
         << L << ", " << R << "] = " << countInRange(L, R, K) << endl;
    return 0;
}
