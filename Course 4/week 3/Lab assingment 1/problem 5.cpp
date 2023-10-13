#include <iostream>
#include <vector>

using namespace std;

void dfs(int u, vector<vector<int>>& adj_list, vector<bool>& visited) {
    visited[u] = true;

    for (int v : adj_list[u]) {
        if (!visited[v]) {
            dfs(v, adj_list, visited);
        }
    }
}

int count_components(int n, vector<vector<int>>& adj_list) {
    vector<bool> visited(n, false);
    int count = 0;

    for (int u = 0; u < n; u++) {
        if (!visited[u]) {
            dfs(u, adj_list, visited);
            count++;
        }
    }

    return count;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj_list(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u); 
    }

    int num_components = count_components(n, adj_list);

    cout << num_components << endl;

    return 0;
}
