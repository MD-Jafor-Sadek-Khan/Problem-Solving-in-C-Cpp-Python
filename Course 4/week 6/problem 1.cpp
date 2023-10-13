#include <iostream>
#include <vector>
#include<climits>

using namespace std;

struct Edge {
    int source, destination, weight;
};

bool hasNegativeCycle(vector<Edge>& edges, int numVertices) {
    vector<int> distance(numVertices, INT_MAX);
    distance[0] = 0;  

    
    for (int i = 0; i < numVertices - 1; ++i) {
        for (const auto& edge : edges) {
            int u = edge.source - 1;
            int v = edge.destination - 1;
            int w = edge.weight;

            if (distance[u] != INT_MAX && distance[u] + w < distance[v]) {
                distance[v] = distance[u] + w;
            }
        }
    }

    
    for (const auto& edge : edges) {
        int u = edge.source - 1;
        int v = edge.destination - 1;
        int w = edge.weight;

        if (distance[u] != INT_MAX && distance[u] + w < distance[v]) {
            return true;  
        }
    }

    return false;  
}

int main() {
    int numVertices, numEdges;
    cout << "Enter the number of vertices: ";
    cin >> numVertices;
    cout << "Enter the number of edges: ";
    cin >> numEdges;

    vector<Edge> edges(numEdges);

    cout << "Enter the graph data in the format (source destination weight):" << endl;
    for (int i = 0; i < numEdges; ++i) {
        cin >> edges[i].source >> edges[i].destination >> edges[i].weight;
    }

    if (hasNegativeCycle(edges, numVertices)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
