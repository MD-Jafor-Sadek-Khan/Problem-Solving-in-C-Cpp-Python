#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <limits>
using namespace std;


class Solution {
public:
    int numSquares(int n) {
        unordered_map<int, int> memo;
        return numSquaresHelper(n, memo);
    }

private:
    int numSquaresHelper(int n, unordered_map<int, int>& memo) {
        if (n == 0)
            return 0;

        if (memo.count(n))
            return memo[n];

        int minCount = numeric_limits<int>::max();

        for (int i = 1; i * i <= n; ++i) {
            int count = numSquaresHelper(n - i * i, memo) + 1;
            minCount = min(minCount, count);
        }

        memo[n] = minCount;
        return minCount;
    }
};

int main() {
    Solution solution;
    int n;
    
    cin >> n;
    int result = solution.numSquares(n);
    cout << result << endl;
    return 0;
}
