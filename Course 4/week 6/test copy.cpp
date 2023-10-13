#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Edge {
    int source, destination, weight;
};

bool bellmanFord(vector<Edge>& edges, int numVertices, vector<int>& cycle) {
    vector<int> distance(numVertices, INT_MAX);
    vector<int> parent(numVertices, -1);
    int lastUpdatedVertex;

    distance[0] = 0;

    for (int i = 0; i < numVertices - 1; ++i) {
        lastUpdatedVertex = -1;
        for (const auto& edge : edges) {
            int u = edge.source - 1;
            int v = edge.destination - 1;
            int w = edge.weight;

            if (distance[u] != INT_MAX && distance[u] + w < distance[v]) {
                distance[v] = distance[u] + w;
                parent[v] = u;
                lastUpdatedVertex = v;
            }
        }
    }

    if (lastUpdatedVertex != -1) {
        // Negative cycle found, backtrack to find the cycle nodes
        int startVertex = lastUpdatedVertex;
        for (int i = 0; i < numVertices; ++i) {
            startVertex = parent[startVertex];
        }

        int currentVertex = startVertex;
        cycle.push_back(startVertex + 1);
        currentVertex = parent[currentVertex];
        while (currentVertex != startVertex) {
            cycle.push_back(currentVertex + 1);
            currentVertex = parent[currentVertex];
        }
        cycle.push_back(startVertex + 1);

        return true;
    }

    return false;
}

int main() {
    int numVertices, numEdges;
    cin >> numVertices >> numEdges;

    vector<Edge> edges(numEdges);

    for (int i = 0; i < numEdges; ++i) {
        cin >> edges[i].source >> edges[i].destination >> edges[i].weight;
    }

    vector<int> cycle;
    if (bellmanFord(edges, numVertices, cycle)) {
        cout << "YES" << endl;
        for (int i = cycle.size() - 1; i >= 0; --i) {
            cout << cycle[i] << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
