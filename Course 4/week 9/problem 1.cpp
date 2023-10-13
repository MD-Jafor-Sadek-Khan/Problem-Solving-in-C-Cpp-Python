#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int row, int col, int& current_volume) {
    int n = grid.size();
    int m = grid[0].size();

    if (row < 0 || row >= n || col < 0 || col >= m || visited[row][col] || grid[row][col] == 0) {
        return;
    }

    visited[row][col] = true;

    current_volume += grid[row][col];
    dfs(grid, visited, row - 1, col, current_volume);  // Up
    dfs(grid, visited, row + 1, col, current_volume);  // Down
    dfs(grid, visited, row, col - 1, current_volume);  // Left
    dfs(grid, visited, row, col + 1, current_volume);  // Right
}

int largest_volume(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int max_volume = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] > 0 && !visited[i][j]) {
                int volume = 0;
                dfs(grid, visited, i, j, volume);
                max_volume = max(max_volume, volume);
            }
        }
    }

    return max_volume;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        int max_volume = largest_volume(grid);
        cout << max_volume << endl;
    }

    return 0;
}
