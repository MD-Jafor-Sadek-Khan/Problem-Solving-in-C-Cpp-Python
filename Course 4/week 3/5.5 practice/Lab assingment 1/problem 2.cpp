#include<bits/stdc++.h>

using namespace std;

int main() {

    int n = 6; 
    vector<vector<int>> adj_list = {{1, 3, 4}, {0, 2, 5}, {1, 4}, {0}, {0, 2, 5}, {1, 4}};
    
    vector<int> dist(n, -1);
    vector<bool> visited(n, false);

    
    int source = 0;
    dist[source] = 0;
    visited[source] = true;

   
    queue<int> q;
    q.push(source);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj_list[u]) {
            if (!visited[v]) {
                visited[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << "node " << i << " -> level: " << dist[i] << endl;
    }

    return 0;
}
