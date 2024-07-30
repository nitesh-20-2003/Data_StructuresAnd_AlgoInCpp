#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

#define ll long long

vector<vector<ll>> dp;

ll ans(const vector<int>& w, const vector<int>& v, int idx, int tv) 
{
    if (tv == 0) return 0;
    if (idx == w.size()) return INT_MAX;
    if (dp[idx][tv] != -1) return dp[idx][tv];

    ll a = ans(w, v, idx + 1, tv); // Do not include the current item
    if (v[idx] <= tv) {
        a = min(a, ans(w, v, idx + 1, tv - v[idx]) + w[idx]); // Include the current item
    }

    return dp[idx][tv] = a;
}

// ll fbu(const vector<int>& w, const vector<int>& v, int tv,int W) {
//     int n = w.size();
//   dp.resize(105,vector<ll>(100005,LLONG_MAX));
//     for(int i=0;i<dp.size();i++){
//         dp[i][0]=0;
//     }

//     for (int idx = n - 1; idx >= 0; idx--) {
//         for (int j = 0; j <= tv; j++) {
//             ll a =  dp[idx + 1][tv]; // Do not include the current item
//     if (v[idx] <= tv) 
//     {
//         a = min(a, dp[idx + 1][tv - v[idx]] + w[idx]); // Include the current 
//     }
//     dp[idx][j]=a;
//         }
//     }
    
//     ll result = 0;
//     for (int i = 0; i <= n * 1000; i++) {
//         if (dp[0][i] <= W) {
//             result = i;
//         }
//     }
//    return result;
// }

int main() {
    int N, W;
    cin >> N >> W;

    vector<int> w(N), v(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> w[i] >> v[i];
    }

    dp.resize(N + 1, vector<ll>(N * 1000 + 1, -1));

    int result = 0;
    for (int i = 0; i <= N * 1000; i++) 
    {
        if (ans(w, v, 0, i) <= W) 
        {
            result = i;
        }
    }
    cout<<result<<endl;
    cout<<endl;

    // cout<<fbu(w,v,N*1000,W);

    return 0;
}
