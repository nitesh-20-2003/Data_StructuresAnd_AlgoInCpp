#include <bits/stdc++.h>
using namespace std;

// Type Aliases
#define ll long long
#define umi unordered_map<int,int>
#define vi vector<int>
#define mh priority_queue<int,vi>
#define mhi priority_queue<int,vi,greater<int>>
#define vll vector<ll>
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

// Constants
const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;
ll inf = 1e18;

// Fast I/O
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
class Solution {
    void ans(vvi Combinations,vi current,int idx,int target,vi candidates,int currSum)
    {
        if(idx==candidates.size())return;
        if(currSum==target)
        {
            Combinations.pb(current);
            return;
        }
             //pick 
            if(currSum<target)
            {
                current.pb(candidates[idx]);
                ans(Combinations,current,idx+1,target,candidates,currSum+=candidates[idx]);
            }
            ans(Combinations,current,idx+1,target,candidates,currSum);
        // notpick
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vvi Combinations;
        vi current;
        int idx=0;
        ans(Combinations,current,0,target,candidates,0);
        return Combinations;

    }
} c;

// Solution Template
void solve() {
    // Your code here
}

int main() {
    fastio;
    vi candidates={10,1,2,7,6,1,5};
    int target=8;
 auto ans=   c.combinationSum2(candidates,target);
    for(int i=0;i<sz(ans);i++){
        cout<<" hii";
        for(auto ele:ans[i])cout<<ele<<" ";
        cout<<endl;
    }

    return 0;
}
/**
 * Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
 */