#include <bits/stdc++.h>
using namespace std;

struct Project {
    int start, end, reward;
};

bool compareByEnd(const Project &a, const Project &b) {
    return a.end < b.end;
}

int main() {
    int n;
    cin >> n;

    vector<Project> projects(n);

    // Input projects
    for (int i = 0; i < n; i++) {
        cin >> projects[i].start >> projects[i].end >> projects[i].reward;
    }

    // Sort projects by end day
    sort(projects.begin(), projects.end(), compareByEnd);

    // DP array to store maximum rewards
    vector<long long> dp(n, 0);

    // Helper array for binary search
    vector<int> endDays(n);
    for (int i = 0; i < n; i++) {
        endDays[i] = projects[i].end;
    }

    for (int i = 0; i < n; i++) {
        dp[i] = projects[i].reward;
        // Find the last project that doesn't overlap with the current one
        int idx = lower_bound(endDays.begin(), endDays.end(), projects[i].start) - endDays.begin();
        cout<<idx<<" ";
        if (idx > 0) {
            dp[i] += dp[idx - 1];
        }
        if (i > 0) {
            dp[i] = max(dp[i], dp[i - 1]);
        }
        cout<<dp[i]<<endl;
    }

    // Maximum reward is the last element in the dp array
    cout<<endl<<endl;
    cout << dp[n - 1] << endl;

    return 0;
}
