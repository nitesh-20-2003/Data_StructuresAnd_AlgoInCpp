#include <bits/stdc++.h>
using namespace std;

int minMoves(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1) return -1;

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = true;

    int steps = 0;
    vector<int> dr = {-1, 0, 1, 0};
    vector<int> dc = {0, 1, 0, -1};

    while (!q.empty()) {
        int sz = q.size();
        while (sz--) {
            auto [r, c] = q.front();
            q.pop();

            if (r == n - 1 && c == m - 1)
                return steps;

            for (int d = 0; d < 4; ++d) {
                int nr = r + dr[d];
                int nc = c + dc[d];

                if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                    !visited[nr][nc] && grid[nr][nc] == 0) {
                    visited[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }
        steps++;
    }

    return -1; 
}

int main() {
    vector<vector<int>> grid = {
        {0, 0, 1},
        {0, 0, 0},
        {1, 0, 0}
    };

    int result = minMoves(grid);
    cout << "Minimum moves: " << result << endl;

    return 0;
}
