#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> dp(100001, -1);

long long maxPoints(vector<long long>& count, int n) {
    if (n <= 0) {
        return 0;
    }

    if (dp[n] != -1) {
        return dp[n];
    }

    long long points = max(maxPoints(count, n - 1), maxPoints(count, n - 2) + count[n] * n);
    dp[n] = points;

    return points;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int maxVal = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxVal = max(maxVal, a[i]);
    }

    vector<long long> count(maxVal + 1, 0);
    for (int i = 0; i < n; i++) {
        count[a[i]]++;
    }

    long long result = maxPoints(count, maxVal);
    cout << result << endl;

    return 0;
}
