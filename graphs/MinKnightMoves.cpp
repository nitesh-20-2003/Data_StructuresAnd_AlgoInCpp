#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
#include <queue>

using namespace std;

const int OFFSET = 300;
int dp[605][605];

struct Point {
    int x, y, dist;
};

vector<pair<int, int>> moves = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};

int ans(int x, int y) {
    memset(dp, -1, sizeof(dp));

    queue<Point> q;
    q.push({OFFSET, OFFSET, 0});
    dp[OFFSET][OFFSET] = 0;

    while (!q.empty()) {
        Point current = q.front();
        q.pop();

        if (current.x == x + OFFSET && current.y == y + OFFSET) {
            return current.dist;
        }

        for (const auto& move : moves) {
            int nx = current.x + move.first;
            int ny = current.y + move.second;

            if (nx >= 0 && nx < 605 && ny >= 0 && ny < 605 && dp[nx][ny] == -1) {
                dp[nx][ny] = current.dist + 1;
                q.push({nx, ny, current.dist + 1});
            }
        }
    }

    return -1; // Unreachable case (theoretically impossible for valid knight moves)
}

void solve() {
    int x, y;
    cin >> x >> y;
    cout << ans(x, y) << endl;
}

int main() {
    solve();
    return 0;
}
