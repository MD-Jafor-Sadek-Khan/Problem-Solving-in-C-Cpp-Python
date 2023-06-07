#include <iostream>
#include <vector>
using namespace std;

string s, t;
vector<vector<string>> dp;

string lcs(int i, int j) {
    if (i == 0 || j == 0) {
        return "";
    }
    if (dp[i][j] != "") {
        return dp[i][j];
    }
    if (s[i - 1] == t[j - 1]) {
        dp[i][j] = lcs(i - 1, j - 1) + s[i - 1];
        return dp[i][j];
    } else {
        string lcs1 = lcs(i - 1, j);
        string lcs2 = lcs(i, j - 1);
        dp[i][j] = (lcs1.length() > lcs2.length()) ? lcs1 : lcs2;
        return dp[i][j];
    }
}

int main() {
    cin >> s >> t;
    int n = s.length();
    int m = t.length();
    dp.resize(n + 1, vector<string>(m + 1, ""));

    string longestSubsequence = lcs(n, m);
    cout << longestSubsequence << endl;

    return 0;
}
