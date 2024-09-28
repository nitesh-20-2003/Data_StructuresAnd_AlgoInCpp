#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;

    // Calculate the total sum of the first n natural numbers
    int totalSum = n * (n + 1) / 2;

    // If the total sum is odd, it is impossible to partition the set into two subsets of equal sum
    if (totalSum % 2 != 0) {
        cout << 0 << endl;
        return 0;
    }

    int target = totalSum / 2;

    // Create a DP array with size target + 1, initialized to 0
    vector<int> dp(target + 1, 0);
    dp[0] = 1;  // There is one way to get a sum of 0 (using no elements)

    // DP transition to count the number of ways to get the target sum
    for (int number = 1; number <= n; ++number) 
    {
        for (int j = target; j >= number; --j) 
        {
            dp[j] = (dp[j] + dp[j - number]) % MOD;
        }
    }

    // The result is the number of ways to achieve the target sum divided by 2
    cout << (dp[target] * 1LL * 500000004 % MOD) << endl;

    return 0;
}
