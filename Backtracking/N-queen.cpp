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

vector<vector<char>> grid;
vector<vector<string>> result;

bool canPlaceQueen(int row, int col, int n) 
{
    // Check column
    RREP(i, row - 1) {
        if (grid[i][col] == 'Q') return false;
    }
    // Check left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (grid[i][j] == 'Q') return false;
    }
    // Check right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) 
    {
        if (grid[i][j] == 'Q') return false;
    }
    return true; // No attack at all
}

void f(int row, int n) {
    if (row == n) {
        vector<string> temp;
        // We got one possible answer
        REP(i, n) {
            string res = "";
            REP(j, n) 
            {
                res += grid[i][j];
            }
            temp.pb(res);
        }
        result.pb(temp);
        return;
    }
    for (int col = 0; col < n; col++) {
        if (canPlaceQueen(row, col, n)) 
        {
            grid[row][col] = 'Q';
            f(row + 1, n);
            grid[row][col] = '.';
        }
    }
}

vector<vector<string>> nqueen(int n) {
    grid.clear();
    result.clear();
    grid.resize(n, vector<char>(n, '.'));
    f(0, n);
    return result;
}

int main() {
    fastio;

    int n = 4;
    vector<vector<string>> solutions = nqueen(n);

    for (const auto& solution : solutions) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}
