#include <bits/stdc++.h>
using namespace std;
// Type Aliases
#define ll long long
#define umi unordered_map<int,int>
#define vi vector<int>
#define mh priority_queue<int,vi>
#define mhi priority_queue<int,vi,greater<int>>
#define vll vector<ll>
#define vvc vector<vector<bool>>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<double, double>
#define vpll vector<pll>
#define vpii vector<pii>
#define vpdd vector<pdd>
#define vvi vector<vi>
#define vvll vector<vll>
#define vvpii vector<vpii>
#define vvpll vector<vpll>
#define vvvi vector<vvi>
// Macros
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define yn(ans) printf("%s\n", (ans) ? "Yes" : "No")
#define YN(ans) printf("%s\n", (ans) ? "YES" : "NO")
#define FOR(i, s, e, t) for (int (i) = (s); (i) < (e); (i) += (t))
#define REP(i, e) for (int i = 0; i < (e); ++i)
#define REP1(i, s, e) for (int i = (s); i < (e); ++i)
#define RREP(i, e) for (int i = (e); i >= 0; --i)
#define RREP1(i, e, s) for (int i = (e); i >= (s); --i)
#define DEBUG printf("%d\n", __LINE__); fflush(stdout);
// Fast I/O
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
class Solution {
public:
int ans=INT_MIN;
int  solve(vvi &board,int row,int col,int k,vvc visited,int sum,int n) {
    if(k==0){
        ans=max(ans,sum);
        k=3;
        return;
    }
    for(int col=0;col<n;col++){
        if(place(col,row,board)){

        }
    }
}
bool place(int col,int row,vvi board){
    // only col check
    RREP(i,row-1){

    }

}
    long long maximumValueSum(vector<vector<int>>& board) 
    {
        int n=sz(board);
        vector<vector<bool>>visited(n,vector<bool>(n,false));
        solve(board,0,0,3,visited,0,n);
    }
}s;

int main() {
    fastio;
    vvi board={{-3,1,1,1},{-3,1,-3,1},{-3,2,1,1}};
  cout<< s.maximumValueSum(board);
    return 0;
}