
// **************************
//     wrong
// ****************************



#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool isQueenChecking(int qx, int qy, int x, int y) {
    return qx == x || qy == y || abs(qx - x) == abs(qy - y);
}

bool canEscapeBFS(const vector<vector<int>>& board, int qx, int qy, int kx, int ky) {
    int n = board.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    queue<pair<int, int>> q;
    q.push(make_pair(kx, ky));
    visited[kx][ky] = true;

    int dx[] = {1, 1, 1, -1, -1, -1, 0, 0};
    int dy[] = {1, 0, -1, 1, 0, -1, 1, -1};

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();

        if (isQueenChecking(qx, qy, curr.first, curr.second))
            continue;

        if (curr.first == qx && curr.second == qy)
            return false;

        for (int i = 0; i < 8; i++) {
            int nx = curr.first + dx[i];
            int ny = curr.second + dy[i];

            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && !visited[nx][ny] && board[nx][ny] != -1) {
                q.push(make_pair(nx, ny));
                visited[nx][ny] = true;
            }
        }
    }

    return true;
}

bool canEscapeDFS(int x, int y, int qx, int qy, vector<vector<int>>& board) {
    if (isQueenChecking(qx, qy, x, y))
        return false;

    if (x == qx && y == qy)
        return false;

    int dx[] = {1, 1, 1, -1, -1, -1, 0, 0};
    int dy[] = {1, 0, -1, 1, 0, -1, 1, -1};

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 1 && nx <= board.size() && ny >= 1 && ny <= board.size() && board[nx][ny] != -1) {
            board[nx][ny] = -1;
            if (canEscapeDFS(nx, ny, qx, qy, board))
                return true;
            board[nx][ny] = 0;
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    int qx, qy, kx, ky, cx, cy;
    cin >> qx >> qy >> kx >> ky >> cx >> cy;

    vector<vector<int>> board(n + 1, vector<int>(n + 1, 0));
    board[qx][qy] = -1;

    bool canEscapeBFSFlag = canEscapeBFS(board, qx, qy, kx, ky);
    bool canEscapeDFSFlag = canEscapeDFS(kx, ky, qx, qy, board);

    if (canEscapeBFSFlag && canEscapeDFSFlag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
