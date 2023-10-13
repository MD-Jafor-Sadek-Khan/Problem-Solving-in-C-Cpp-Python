#include <iostream>
#include <vector>
#include <algorithm>
// tabulation
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> count(100001, 0);
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }

    vector<long long> dp(100001, 0);
    dp[1] = count[1];
    dp[2] = max(count[1], count[2] * 2);

    for (int i = 3; i <= 100000; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + count[i] * i);
    }

    cout << dp[100000] << endl;

    return 0;
}
