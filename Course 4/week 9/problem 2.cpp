#include <iostream>
#include <vector>
#include <queue>
#include <limits>

class Solution {
public:
    int networkDelayTime(std::vector<std::vector<int>>& times, int n, int k) {
        std::vector<std::vector<std::pair<int, int>>> graph(n + 1);
        for (const auto& time : times) {
            int u = time[0];
            int v = time[1];
            int w = time[2];
            graph[u].emplace_back(v, w);
        }

        std::vector<int> distance(n + 1, std::numeric_limits<int>::max());

        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;

        distance[k] = 0;
        pq.push({0, k});

        while (!pq.empty()) {
            int currNode = pq.top().second;
            int currDistance = pq.top().first;
            pq.pop();

            if (currDistance > distance[currNode]) {
                continue;
            }

            for (const auto& neighbor : graph[currNode]) {
                int nextNode = neighbor.first;
                int edgeWeight = neighbor.second;
                int newDistance = currDistance + edgeWeight;

                if (newDistance < distance[nextNode]) {
                    distance[nextNode] = newDistance;
                    pq.push({newDistance, nextNode});
                }
            }
        }

        int maxDistance = 0;
        for (int i = 1; i <= n; i++) {
            maxDistance = std::max(maxDistance, distance[i]);
        }

        return (maxDistance == std::numeric_limits<int>::max()) ? -1 : maxDistance;
    }
};

