#include <bits/stdc++.h>
using namespace std;

// Type Aliases
#define ll long long
#define vi vector<int>
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

// Solution Template
void solve() {
    vi v2={1,2,3,45,6};
    REP(i,sz(v2)){
        cout<<v2[i]<<endl;   
         }
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {

        solve();
    }
    return 0;
}