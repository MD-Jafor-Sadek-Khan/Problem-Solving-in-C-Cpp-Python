// **************************
//     wrong
// ****************************




#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int x, int y, int n) {
    return (x >= 1 && x <= n && y >= 1 && y <= n);
}

bool canWinDFS(int n, int ax, int ay, int bx, int by, int cx, int cy, vector<vector<bool>>& visited) {
    if (bx == cx && by == cy) {
        return true;
    }

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    visited[bx][by] = true;

    for (int i = 0; i < 8; i++) {
        int newX = bx + dx[i];
        int newY = by + dy[i];

        if (isSafe(newX, newY, n) && !visited[newX][newY] && (newX != ax || newY != ay)) {
            if (canWinDFS(n, ax, ay, newX, newY, cx, cy, visited)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int n, ax, ay, bx, by, cx, cy;
    cin >> n;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;

    vector<vector<bool>> visited(n + 1, vector<bool>(n + 1, false));

    if (canWinDFS(n, ax, ay, bx, by, cx, cy, visited)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
