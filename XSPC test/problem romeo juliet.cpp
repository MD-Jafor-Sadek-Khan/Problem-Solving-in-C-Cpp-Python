#include <iostream>
#include <vector>
#include <limits>

const int INF = std::numeric_limits<int>::max();

bool canReunite(int numCities, int numRoads, const std::vector<std::pair<int, int>>& roads, int startCity, int targetCity, int maxSteps) {
    if (startCity == targetCity) {
        return true;
    }

    std::vector<std::vector<std::pair<int, int>>> graph(numCities);
    for (int i = 0; i < numRoads; i++) {
        int cityA = roads[i].first;
        int cityB = roads[i].second;
        graph[cityA].push_back({ cityB, 1 });
        graph[cityB].push_back({ cityA, 1 });
    }

    std::vector<std::vector<int>> distances(numCities, std::vector<int>(maxSteps + 1, INF));
    distances[startCity][0] = 0;

    for (int step = 0; step <= maxSteps; ++step) {
        for (int city = 0; city < numCities; ++city) {
            for (const auto& neighbor : graph[city]) {
                int neighborCity = neighbor.first;
                int neighborDist = neighbor.second;
                if (distances[city][step] != INF && distances[city][step] + neighborDist < distances[neighborCity][step + 1]) {
                    distances[neighborCity][step + 1] = distances[city][step] + neighborDist;
                }
            }
        }
    }

    for (int step = 1; step <= maxSteps; ++step) {
        if (distances[targetCity][step] != INF) {
            return true;
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
