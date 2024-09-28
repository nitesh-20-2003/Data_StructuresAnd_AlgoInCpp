#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    
    // Initialize the DP table
    vector<vector<int>> dp(a+1, vector<int>(b+1, 0));
    
    // Fill the DP table
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            if (i == j) {
                dp[i][j] = 0;
            } else {
                int min_moves = INT_MAX;
                // Horizontal cuts
                for (int k = 1; k < i; ++k) {
                    min_moves = min(min_moves, dp[k][j] + dp[i-k][j] + 1);
                }
                // Vertical cuts
                for (int k = 1; k < j; ++k) {
                    min_moves = min(min_moves, dp[i][k] + dp[i][j-k] + 1);
                }
                dp[i][j] = min_moves;
            }
        }
    }
    
    // The answer is the number of moves for the rectangle a x b
    cout << dp[a][b] << endl;
    
    return 0;
}
