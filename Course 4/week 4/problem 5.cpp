#include <bits/stdc++.h>

using namespace std;

bool isGoalPossible(vector<vector<int>>& graph, int n) {
    vector<bool> visited(n + 1, false);
    queue<int> q;

    visited[1] = true;
    q.push(1);

    while (!q.empty()) {
        int currentCity = q.front();
        q.pop();

        if (currentCity == n) {
            return true;
        }

        for (int i = 0; i < graph[currentCity].size(); i++) {
            int nextCity = graph[currentCity][i];
            if (!visited[nextCity]) {
                visited[nextCity] = true;
                q.push(nextCity);
            }
        }
    }

    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    if (isGoalPossible(graph, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
