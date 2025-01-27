#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>

using namespace std;

string final = "";
vector<vector<int>> dp(10005, vector<int>(10005, -1));

int ans(string f, string s, string t, int i, int j) 
{
    if (i >= s.size() || j >= t.size()) 
    {
        return 0; // No common substring found at the end
    }
  if(f.size()>final.size())final=f;

    
    if (dp[i][j] != -1) {
        return dp[i][j]; // Use precomputed value if available
    }

    if (s[i] == t[j]) 
    {
        f += s[i];
        return dp[i][j] = 1 + ans(f, s, t, i + 1, j + 1);
    } else {
        return dp[i][j] = max(ans(f, s, t, i + 1, j),
                              ans(f, s, t, i, j + 1));
    }
}

int main() {
    string s = "abac";
    string t = "cab";
    string f = "";
    ans(f, s, t, 0, 0);
 cout<<final<<endl;
    
    return 0;
}
