#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void backtrack(vi &arr, int idx) {
    if (idx == arr.size() - 1) {
        for (int num : arr) cout << num << " ";
        cout << endl;
        return;
    }
    for (int i = idx; i < arr.size(); ++i) {
        swap(arr[i], arr[idx]);
        backtrack(arr, idx + 1);
        swap(arr[i], arr[idx]); // backtrack
    }
}

int main() {
    fastio;
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    backtrack(arr, 0);

    return 0;
}
