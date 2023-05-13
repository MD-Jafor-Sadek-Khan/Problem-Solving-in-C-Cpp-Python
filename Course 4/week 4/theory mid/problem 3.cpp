#include<bits/stdc++.h>

using namespace std;

bool isCycleUtil(vector<vector<int>>& graph, int v, int parent, vector<bool>& visited) {
    visited[v] = true;

    for (int i = 0; i < graph[v].size(); i++) {
        int adjacent = graph[v][i];

        if (!visited[adjacent]) {
            if (isCycleUtil(graph, adjacent, v, visited))
                return true;
        } else if (adjacent != parent) {
            return true;
        }
    }

    return false;
}

bool isCycle(vector<vector<int>>& graph, int n) {
    vector<bool> visited(n + 1, false);

    for (int i = 1; i <= n; i++) {
        if (!visited[i] && isCycleUtil(graph, i, -1, visited))
            return true;
    }

    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    if (isCycle(graph, n)) {
        cout << "Cycle Exist" << endl;
    } else {
        cout << "No Cycle" << endl;
    }

    return 0;
}
