#include <iostream>
#include <vector>
#include <climits>
#include <deque>
#include <algorithm>

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
        reverse(cycle.begin(), cycle.end()); 

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
        int i;
        cout << "YES" << endl;
        for ( i = 0; i < cycle.size(); ++i) {
            cout << cycle[i] << " ";  
            
        }
        if (i==cycle.size() )
        {
            cout<<cycle[0];
        }
        
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
