#include <bits/stdc++.h>
using namespace std;

long long dp[20][2][200]; // pos, tight, digit_sum

// Digit DP function to compute sum of digits
long long digitSumDP(string &num, int pos, bool tight, long long sum) {
    if (pos == num.size()) return sum; // Base case: full number built

    if (dp[pos][tight][sum] != -1) return dp[pos][tight][sum];

    int limit = tight ? num[pos] - '0' : 9;
    long long res = 0;

    for (int digit = 0; digit <= limit; ++digit) {
        bool newTight = tight && (digit == limit);
        res += digitSumDP(num, pos + 1, newTight, sum + digit);
    }

    return dp[pos][tight][sum] = res;
}

long long solve(string numStr) {
    memset(dp, -1, sizeof(dp));
    return digitSumDP(numStr, 0, true, 0);
}

long long sumOfDigitsInRange(int L, int R) {
    string rStr = to_string(R);
    string lStr = to_string(L - 1);
    return solve(rStr) - solve(lStr);
}

int main() {
    int L = 1, R = 5;
    cout << "Sum of digits in range [" << L << ", " << R << "] = " 
         << sumOfDigitsInRange(L, R) << endl;
    return 0;
}
