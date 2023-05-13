#include <iostream>
#include <vector>

using namespace std;

bool dfs(int u, vector<bool>& visited, vector<bool>& rec_stack, vector<vector<int>>& adj_list) {
    visited[u] = true;
    rec_stack[u] = true;

    for (int v : adj_list[u]) {
        if (!visited[v] && dfs(v, visited, rec_stack, adj_list)) {
            return true;
        }
        else if (rec_stack[v]) {
            return true;
        }
    }

    rec_stack[u] = false;
    return false;
}

bool has_cycle(vector<vector<int>>& adj_list) {
    int n = adj_list.size();
    vector<bool> visited(n, false);
    vector<bool> rec_stack(n, false);

    for (int u = 0; u < n; u++) {
        if (!visited[u] && dfs(u, visited, rec_stack, adj_list)) {
            return true;
        }
    }

    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj_list(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    if (has_cycle(adj_list)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
