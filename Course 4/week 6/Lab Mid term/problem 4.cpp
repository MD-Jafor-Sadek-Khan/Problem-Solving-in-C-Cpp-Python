#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include<algorithm>

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;

const int INF = numeric_limits<int>::max();

vi dijkstra(const vvpii& graph, int n, int source) {
    vi distance(n + 1, INF);
    vi parent(n + 1, -1);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    distance[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        int u = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        if (dist > distance[u]) {
            continue;
        }

        for (const auto& edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
                parent[v] = u;
                pq.push({distance[v], v});
            }
        }
    }

    return parent;
}

vi reconstructPath(const vi& parent, int n) {
    vi path;
    int curr = n;

    while (curr != -1) {
        path.push_back(curr);
        curr = parent[curr];
    }

    reverse(path.begin(), path.end());
    return path;
}

int main() {
    int n, m;
    cin >> n >> m;

    vvpii graph(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        graph[a].push_back({b, w});
        graph[b].push_back({a, w});
    }

    vi parent = dijkstra(graph, n, 1);

    if (parent[n] == -1) {
        cout << -1 << endl;
    } else {
        vi path = reconstructPath(parent, n);
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
