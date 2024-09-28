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

// Random Number Generator
mt19937_64 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());

// Solution Template
bool safe(vvi grid,int i,int j,int n){
    return i>=0&&j>=0&&i<n&&j<n&&grid[i][j]==-1;
}
std::vector<int> dx = {2, 2, -2, -2, 1, 1, -1, -1};
    std::vector<int> dy = {1, -1, 1, -1, 2, -2, 2, -2};
    void display(vvi grid,int n){
        REP(i,n){
            REP(j,n){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
    }
void f(vvi &grid,int i ,int j,int n,int count){
    if(count==n*n-1){
        grid[i][j]=count;
        display(grid,n);
        cout<<"********"<<endl;
        grid[i][j]=-1;
        return;
    }
    // from i ,j we can go to 8 positions
    // for every position we can only go if it is safe..
    REP(k,8){
         if(safe(grid,i+dx[k],j+dy[k],n)){
        grid[i][j]=count;
        f(grid,i+dx[k],j+dy[k],n,count+1);
        grid[i][j]=-1;
    }
    }
   
}
void solve(int n,int i ,int j) {
    vvi grid(n,vi(n,-1));// -1 denotes postion is vacant
    f(grid,i,j,n,0);
}

int main() {
    fastio;
    solve(5,0,0);
    return 0;
}