#include <iostream>
#include <vector>
#include <queue>

bool canReunite(int numCities, int numRoads, const std::vector<std::pair<int, int>>& roads, int startCity, int targetCity, int maxSteps) {
    // Create an adjacency matrix to represent the graph
    std::vector<std::vector<bool>> adjacencyMatrix(numCities, std::vector<bool>(numCities, false));
    for (int i = 0; i < numRoads; i++) {
        int cityA = roads[i].first;
        int cityB = roads[i].second;
        adjacencyMatrix[cityA][cityB] = adjacencyMatrix[cityB][cityA] = true;
    }

    // Initialize visited array and distance array
    std::vector<bool> visited(numCities, false);
    std::vector<int> distance(numCities, 0);

    // Use BFS to traverse the graph iteratively
    std::queue<int> q;
    q.push(startCity);
    visited[startCity] = true;

    while (!q.empty()) {
        int currentCity = q.front();
        q.pop();

        if (currentCity == targetCity && distance[currentCity] <= maxSteps) {
            return true;
        }

        if (distance[currentCity] >= maxSteps) {
            continue;
        }

        for (int neighbor = 0; neighbor < numCities; neighbor++) {
            if (adjacencyMatrix[currentCity][neighbor] && !visited[neighbor]) {
                visited[neighbor] = true;
                distance[neighbor] = distance[currentCity] + 1;
                q.push(neighbor);
            }
        }
    }

    return false;
}

int main() {
    int numCities, numRoads;
    std::cin >> numCities >> numRoads;

    std::vector<std::pair<int, int>> roads(numRoads);
    for (int i = 0; i < numRoads; i++) {
        std::cin >> roads[i].first >> roads[i].second;
    }

    int startCity, targetCity, maxSteps;
    std::cin >> startCity >> targetCity >> maxSteps;

    bool result = canReunite(numCities, numRoads, roads, startCity, targetCity, maxSteps);

    if (result) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
