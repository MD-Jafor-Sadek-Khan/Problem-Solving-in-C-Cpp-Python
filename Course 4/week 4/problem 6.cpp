#include <bits/stdc++.h>


using namespace std;


struct Cell {
    int row;
    int col;
    string path;
};


bool isValid(int row, int col, int n, int m, vector<vector<char>>& labyrinth) {
    return (row >= 0 && row < n && col >= 0 && col < m && labyrinth[row][col] != '#' && labyrinth[row][col] != 'M');
}


bool isSafeBoundary(int row, int col, int n, int m) {
    return (row == 0 || row == n - 1 || col == 0 || col == m - 1);
}


string findPathToSafeBoundary(vector<vector<char>>& labyrinth, int n, int m) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<Cell> q;


    int dx[] = {0, 0, -1, 1};  
    int dy[] = {-1, 1, 0, 0};  


    int startRow, startCol;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (labyrinth[i][j] == 'A') {
                startRow = i;
                startCol = j;
                break;
            }
        }
    }


    visited[startRow][startCol] = true;
    q.push({startRow, startCol, ""});


    while (!q.empty()) {
        Cell current = q.front();
        q.pop();


        int currRow = current.row;
        int currCol = current.col;
        string currPath = current.path;


        if (isSafeBoundary(currRow, currCol, n, m)) {
            return currPath;
        }


        for (int i = 0; i < 4; i++) {
            int newRow = currRow + dx[i];
            int newCol = currCol + dy[i];


            if (isValid(newRow, newCol, n, m, labyrinth) && !visited[newRow][newCol]) {
                visited[newRow][newCol] = true;
                q.push({newRow, newCol, currPath + (i == 0 ? "L" : (i == 1 ? "R" : (i == 2 ? "U" : "D")))});
            }
        }
    }


    return "";
}


int main() {
    int n, m;
    cin >> n >> m;


    vector<vector<char>> labyrinth(n, vector<char>(m));


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> labyrinth[i][j];
        }
    }


    string path = findPathToSafeBoundary(labyrinth, n, m);


    if (path.empty()) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << path.length() << endl;
        cout << path << endl;
    }


    return 0;
}
