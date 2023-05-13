#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minOperations(int n) {
    vector<int> dp(n + 1, INT_MAX);
    dp[1] = 0;

    for (int i = 1; i <= n; i++) {
        if (dp[i] != INT_MAX) {
            if (i + 1 <= n)
                dp[i + 1] = min(dp[i + 1], dp[i] + 1);
            if (2 * i <= n)
                dp[2 * i] = min(dp[2 * i], dp[i] + 1);
            if (3 * i <= n)
                dp[3 * i] = min(dp[3 * i], dp[i] + 1);
        }
    }

    return dp[n];
}

int main() {
    int n;
   
    cin >> n;

    int minOps = minOperations(n);
    cout << minOps << endl;

    return 0;
}
