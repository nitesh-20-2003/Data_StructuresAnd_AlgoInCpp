#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp(1005,vector<int>(1005,-1));
int topdown(vector<int>& a,int i ,int j){
    if(i==j)return a[i];
    int ans=INT_MIN;
    if(dp[i][j]!=-1)return dp[i][j];
    for(int k=i;k<=j;k++){
        ans=max(a[i]-topdown(a,i+1,j),a[j]-topdown(a,i,j-1));
    }
    return dp[i][j]=ans;
}
int lDeque(vector<int>& a)
 {
    int n = a.size();
    vector<vector<long long>> dp(n, vector<long long>(n, 0));

    for (int i = 0; i < n; ++i) {
        dp[i][i] = a[i];
    }

    for (int length = 2; length <= n; ++length) {
        for (int i = 0; i <= n - length; ++i) 
        { cout<<i<<" ";
            int j = i + length - 1;
            cout<<j<<" ";
            dp[i][j] = max(a[i] - dp[i + 1][j], a[j] - dp[i][j - 1]);
            cout<<dp[i][j]<<endl;
        }
    }

    return dp[0][n - 1];
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }

    cout << topdown(a,0,n-1) << endl;

    return 0;
}
