#include <bits/stdc++.h>
using namespace std;

// Recursive function to calculate the minimum number of elevator rides
int cal(vector<int>& input, int m, int index, int currentLoad) {
    // Base case: all items have been processed
    if (index == input.size()) 
    {
        return 1;
    }

    // Option 1: Start a new ride for the current item
    int option1 = 1 + cal(input, m, index + 1, m - input[index]);

    // Option 2: Continue with the current ride if it fits
    int option2 = INT_MAX;
    if (input[index] <= currentLoad) {
        option2 = cal(input, m, index + 1, currentLoad - input[index]);
    }

    // Return the minimum of starting a new ride or continuing the current ride
    return min(option1, option2);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> input(n);
    for (int i = 0; i < n; i++) cin >> input[i];

    cout << cal(input, m, 0, m) << endl; // Start with the first item and full capacity

    return 0;
}
