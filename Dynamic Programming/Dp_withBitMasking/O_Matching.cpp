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
#define mod 10000007

// Macros
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define yn(ans) printf("%s\n", (ans) ? "Yes" : "No")
#define YN(ans) printf("%s\n", (ans) ? "YES" : "NO")
#define FOR(i, s, e, t) for (int (i) = (s); (i) < (e); (i) += (t))
#define REP(i, e) for (int i = 0; i < (e); ++i)
#define REPE(i,e) for(int i=0;i<=e;i++)
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

// Random Number Generator
mt19937_64 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());

// Utility Functions
template<class T> bool chmax(T &a, T b) {
    if (a >= b) return false;
    a = b; return true;
}

template<class T> bool chmin(T &a, T b) {
    if (a <= b) return false;
    a = b; return true;
}

template<class T> void print(vector<T> &v, bool withSize = false) {
    if (withSize) cout << v.size() << endl;
    REP(i, v.size()) cout << v[i] << " ";
    cout << endl;
}
int f(int i,int mask,int n,vvi  &c){
 for(int w=1;w<=n;w++){
    bool available=
    if(c[i][w]){

    }
 }
}
// Solution Template

int main() {
    fastio;
   int n;
   cin>>n;
   vvi c(n+1,vi(n+1));// comaptibilty matrix
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n;j++)cin>>c[i][j];
 }
    f(1,(1<<n)-1)
    return 0;
}