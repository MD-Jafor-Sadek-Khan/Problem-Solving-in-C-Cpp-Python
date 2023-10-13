#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Memoization method
vector<long long> memo;

long long getMaxCoinsMemo(int index, vector<long long>& coins) {
    if (index < 0) {
        return 0;
    }

    if (memo[index] != -1) {
        return memo[index];
    }

    long long takeCurrent = coins[index] + getMaxCoinsMemo(index - 2, coins);
    long long skipCurrent = getMaxCoinsMemo(index - 1, coins);

    memo[index] = max(takeCurrent, skipCurrent);
    return memo[index];
}

int main() {
    int t;
    cin >> t;

    for (int testCase = 1; testCase <= t; testCase++) {
        int n;
        cin >> n;

        vector<long long> coins(n);

        for (int i = 0; i < n; i++) {
            cin >> coins[i];
        }

        // Using memoization
        memo.assign(n, -1);
        long long maxCoinsMemo = getMaxCoinsMemo(n - 1, coins);

        cout << "Case " << testCase << ": " << maxCoinsMemo << endl;
    }

    return 0;
}
