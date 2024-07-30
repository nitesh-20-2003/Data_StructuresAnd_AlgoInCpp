#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> dp;

    // Function to calculate the length of the LCS
    int lcsLength(string& s, string& t, int m, int n) {
        dp.resize(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (s[i - 1] == t[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[m][n];
    }

    // Function to reconstruct and print the LCS
    string reconstructLCS(string& s, string& t, int m, int n) {
        string lcs;
        int i = m, j = n;
        while (i > 0 && j > 0) {
            if (s[i - 1] == t[j - 1]) {
                lcs.push_back(s[i - 1]);
                --i;
                --j;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                --i;
            } else {
                --j;
            }
        }
        reverse(lcs.begin(), lcs.end());
        return lcs;
    }

    // Function to calculate and print the LCS
    string longestCommonSubsequence(string str1, string str2) {
        int m = str1.size();
        int n = str2.size();
        lcsLength(str1, str2, m, n);
        return reconstructLCS(str1, str2, m, n);
    }
};

int main() {
    string s = "abac";
    string t = "cab";
    Solution sol;
    string lcs = sol.longestCommonSubsequence(s, t);
    cout << "Longest common subsequence is: " << lcs << endl;
    return 0;
}
