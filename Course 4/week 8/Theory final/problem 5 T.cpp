#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int tabulation(int n, const vector<vector<char>> &grid)
{
    vector<vector<int>> dp(n, vector<int>(n, 0));

    if (grid[n - 1][n - 1] != '*')
    {
        dp[n - 1][n - 1] = 1;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (grid[n - 1][i] != '*')
        {
            dp[n - 1][i] = dp[n - 1][i + 1];
        }

        if (grid[i][n - 1] != '*')
        {
            dp[i][n - 1] = dp[i + 1][n - 1];
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = n - 2; j >= 0; j--)
        {
            if (grid[i][j] != '*')
            {
                dp[i][j] = (dp[i][j + 1] + dp[i + 1][j]) % MOD;
            }
        }
    }

    return dp[0][0];
}

int main()
{
    int n;
    cin >> n;

    vector<vector<char>> grid(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    int paths = tabulation(n, grid);

    cout << paths << endl;

    return 0;
}
