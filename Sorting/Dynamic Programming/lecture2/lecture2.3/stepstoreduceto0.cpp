#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

int f(int n, std::vector<int>& dp) {
    if (n == 0)
        return 0;
    if(n<=9)
        return 1;
    if (dp[n] != INT_MAX)
        return dp[n];
    
    int ans = INT_MAX;
    int temp = n;
    
    while (temp > 0) {
        int m = temp % 10;
        if (m != 0) {
            ans = std::min(ans, 1 + f(n - m, dp));
        }
        temp = temp / 10;
    }
    
    dp[n] = ans;
    return dp[n];
}

int main() {
    int n = 27;
    std::vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    
    std::cout << f(n, dp) << std::endl;
    return 0;
}
