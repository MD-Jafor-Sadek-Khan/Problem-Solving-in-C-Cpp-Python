#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adj_matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adj_matrix[i][j];
        }
    }

    vector<vector<int>> adj_list(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (adj_matrix[i][j] == 1) {
                adj_list[i].push_back(j);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j : adj_list[i]) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
