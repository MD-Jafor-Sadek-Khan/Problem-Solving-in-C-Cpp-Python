#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int coinCombinations(int n, int x, vector<int>& coins) {
    vector<int> dp(x + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i) {
                dp[i] = (dp[i] + dp[i - coins[j]]) % MOD;
            }
        }
    }

    return dp[x];
}

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int result = coinCombinations(n, x, coins);
    cout << result << endl;

    return 0;
}
