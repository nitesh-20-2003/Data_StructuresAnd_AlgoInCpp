#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    set<int> possible_sums;
    possible_sums.insert(0);

    for (int coin : coins) {
        set<int> new_sums;
        for (int sum : possible_sums) 
        {
            new_sums.insert(sum + coin);
        }
        possible_sums.insert(new_sums.begin(), new_sums.end());
    }

    possible_sums.erase(0);  // Remove the initial zero which isn't a valid sum
    
    cout << possible_sums.size() << endl;
    for (int sum : possible_sums) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
