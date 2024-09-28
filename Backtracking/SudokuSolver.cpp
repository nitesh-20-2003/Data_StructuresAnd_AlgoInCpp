#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Type Aliases
#define ll long long
#define umi unordered_map<int,int>
#define vi vector<int>
#define mh priority_queue<int,vi>
#define mhi priority_queue<int,vi,greater<int>>
#define vll vector<ll>
#define pii pair<int, int>
#define vvc vector<vector<char>>
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

class Solution {
public:
bool isSafe(vvc &board,int r,int c,int num){
    // row check
    REP(i,9){
        if(board[r][i]-'0'==num)return false;

    }
    // col check
    REP(i,9){
        if(board[i][c]-'0'==num)return false;
    }
    // each big cell check
    int x=(r/3)*3;
    int y=(c/3)*3;
    for(int i=x;i<x+3;i++){
        for(int j=y;j<y+3;j++){
            if(board[i][j]-'0'==num)return false;
        }
    }
    return true;
}

bool f(vvc &board,int r,int c){
    if(r==9)return true;
    if(c==9)return f(board,r+1,0);
    if(board[r][c]!='.')return f(board,r,c+1);
    REP1(i,1,9){
        if(isSafe(board,r,c,i)){
            board[r][c]=i;
            bool retval=f(board,r,c+1);
            if(retval)return true;
            board[r][c]='.';

        }
    }
    return false;
}
// Solution Template
    bool isValidSudoku(vector<vector<char>>& board) {
       return f(board,0,0);
    }
};

int main() {
    // Example usage
    vvc board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    Solution sol;
    bool isValid = sol.isValidSudoku(board);
    if (isValid) {
        cout << "Valid Sudoku" << endl;
    } else {
        cout << "Invalid Sudoku" << endl;
    }

    return 0;
}