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
#define rep(i, e) for (int i = 0; i < (e); ++i)
#define rep1(i, s, e) for (int i = (s); i < (e); ++i)
#define rrep(i, e) for (int i = (e); i >= 0; --i)
#define rrep1(i, e, s) for (int i = (e); i >= (s); --i)
#define DEBUG printf("%d\n", __LINE__); fflush(stdout);

// Constants
const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;
ll inf = 1e18;

// Fast I/O
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// Random Number Generator
mt19937_64 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());


// Solution Template
void solve() {
    string txt="forxxorfxdofr";
    string tar="for";
    int count=0;
    unordered_map<char,int>mp;
    for(int i=0;i<tar.size();i++){
        mp[tar[i]]++;
    }
    int i=0;
    int j=0;
    int n=sz(txt);
    while(j<n){
        int len=j-i+1;
        if(len<tar.size()){
            if(mp.find(txt[j])!=mp.end()){
                mp[txt[j]]--;
            }
            j++;
        }
        else{
            bool flag=false;
           for(auto x:mp){
            
            if(x.second!=0){
                flag=true;
                break;
            }
           }
            if(!flag){
                count++;
            }
            mp[txt[i]]--;
            i++;
            j++;
            mp[txt[j]]++;
            

        }

    }
}

int main() {
    fastio;
        solve();
    
    return 0;
}