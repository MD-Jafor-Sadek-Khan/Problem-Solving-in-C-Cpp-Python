#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string s, t;
vector<vector<int>> dp;

int lcs(int i, int j) {
    if (i == 0 || j == 0) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    int ans = max(lcs(i - 1, j), lcs(i, j - 1));
    if (s[i - 1] == t[j - 1]) ans = max(ans, lcs(i - 1, j - 1) + 1);
    return dp[i][j] = ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> s >> t;
    int n = s.size(), m = t.size();
    dp.assign(n + 1, vector<int>(m + 1, -1));

    string ans;
    int i = n, j = m;
    while (i && j) {
        if (s[i - 1] == t[j - 1]) {
            ans += s[i - 1];
            i--, j--;
        } else if (lcs(i - 1, j) >= lcs(i, j - 1)) {
            i--;
        } else {
            j--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}



