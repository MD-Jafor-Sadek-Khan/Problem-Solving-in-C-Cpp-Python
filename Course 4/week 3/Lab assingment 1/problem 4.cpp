#include <bits/stdc++.h>
using namespace std;

bool is_bipartite(int n, vector<vector<int>>& adj_list) {
    vector<int> colors(n, -1); 
    queue<int> q;

    for (int start = 0; start < n; start++) {
        if (colors[start] == -1) {
            colors[start] = 0;
            q.push(start);

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : adj_list[u]) {
                    if (colors[v] == -1) { 
                        colors[v] = 1 - colors[u];
                        q.push(v);
                    }
                    else if (colors[u] == colors[v]) {
                        return false;
                    }
                }
            }
        }
    }

    return true;
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

    if (is_bipartite(n, adj_list)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
