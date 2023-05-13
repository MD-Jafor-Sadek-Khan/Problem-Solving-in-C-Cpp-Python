#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Tabulation method
long long getMaxCoinsTabulation(int n, vector<long long>& coins) {
    if (n == 0) {
        return 0;
    }

    vector<long long> dp(n + 1, 0);
    dp[1] = coins[0];

    for (int i = 2; i <= n; i++) {
        dp[i] = max(coins[i - 1] + dp[i - 2], dp[i - 1]);
    }

    return dp[n];
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

        // Using tabulation
        long long maxCoinsTabulation = getMaxCoinsTabulation(n, coins);

        cout << "Case " << testCase << ": " << maxCoinsTabulation << endl;
    }

    return 0;
}
