#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    
    int maxSum = accumulate(coins.begin(), coins.end(), 0);
    
    vector<bool> possible(maxSum + 1, false);
    possible[0] = true;
    
    for (int i = 0; i < n; i++) {
        for (int j = maxSum; j >= coins[i]; j--) {
            if (possible[j - coins[i]]) {
                possible[j] = true;
            }
        }
    }
    
    int distinctSums = count(possible.begin(), possible.end(), true) - 1; // Exclude sum 0
    
    cout << distinctSums << endl;
    for (int i = 1; i <= maxSum; i++) {
        if (possible[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
