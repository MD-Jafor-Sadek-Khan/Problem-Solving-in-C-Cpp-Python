#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 1000;
const int MAX_M = 1000;

int n, m;
vector<vector<char>> grid;
vector<vector<bool>> visited;

int roomCount = 0;
int maxRoomSize = 0;
int currentRoomSize = 0;

void exploreRoom(int x, int y) {
    visited[x][y] = true;
    currentRoomSize++;

    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && grid[nx][ny] == '.') {
            exploreRoom(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;

    grid.resize(n, vector<char>(m));
    visited.resize(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && grid[i][j] == '.') {
                roomCount++;
                currentRoomSize = 0;
                exploreRoom(i, j);
                maxRoomSize = max(maxRoomSize, currentRoomSize);
            }
        }
    }

    cout << "Rooms - " << roomCount << endl;
    cout << "Length of the longest room - " << maxRoomSize << endl;

    return 0;
}
