#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int memoization(int row, int col, int n, vector<vector<int>>& memo, const vector<vector<char>>& grid) {
    if (row == n - 1 && col == n - 1) {
        return grid[row][col] == '.' ? 1 : 0;
    }
    
    if (row >= n || col >= n || grid[row][col] == '*') {
        return 0;
    }
    
    if (memo[row][col] != -1) {
        return memo[row][col];
    }
    
    int right = memoization(row, col + 1, n, memo, grid) % MOD;
    int down = memoization(row + 1, col, n, memo, grid) % MOD;
    
    memo[row][col] = (right + down) % MOD;
    
    return memo[row][col];
}

int main() {
    int n;
    cin >> n;
    
    vector<vector<char>> grid(n, vector<char>(n));
    vector<vector<int>> memo(n, vector<int>(n, -1));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    
    int paths = memoization(0, 0, n, memo, grid);
    
    cout << paths << endl;
    
    return 0;
}
