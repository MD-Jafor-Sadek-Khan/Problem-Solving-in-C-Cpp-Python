#include <iostream>
#include <vector>

int findKingIndex(int numBlocks, const std::vector<int>& blockNumbers) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of all block numbers
    for (int i = 0; i < numBlocks; i++) {
        totalSum += blockNumbers[i];
    }

    for (int i = 0; i < numBlocks; i++) {
        totalSum -= blockNumbers[i];

        if (leftSum == totalSum) {
            return i;
        }

        leftSum += blockNumbers[i];
    }

    return -1;
}

int main() {
    int numTestCases;
    std::cin >> numTestCases;

    for (int t = 0; t < numTestCases; t++) {
        int numBlocks;
        std::cin >> numBlocks;

        std::vector<int> blockNumbers(numBlocks);
        for (int i = 0; i < numBlocks; i++) {
            std::cin >> blockNumbers[i];
        }

        int kingIndex = findKingIndex(numBlocks, blockNumbers);
        std::cout << kingIndex << std::endl;
    }

    return 0;
}
