#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];

        unordered_map<int, int> memo1;  // Memoization for scenario 1 (without the last house)
        unordered_map<int, int> memo2;  // Memoization for scenario 2 (without the first house)

        int amount1 = robHelper(nums, 0, n - 2, memo1);  // for scenario 1
        int amount2 = robHelper(nums, 1, n - 1, memo2);  // for scenario 2

        return max(amount1, amount2);
    }

private:
    int robHelper(vector<int>& nums, int start, int end, unordered_map<int, int>& memo) {
        int n = end - start + 1;
        if (n <= 0)
            return 0;
        if (n == 1)
            return nums[start];

        if (memo.find(start) != memo.end())
            return memo[start];

        memo[start] = max(nums[start] + robHelper(nums, start + 2, end, memo),
                          robHelper(nums, start + 1, end, memo));

        return memo[start];
    }
};

int main() {
    vector<int> nums;

    string input;
    getline(cin, input);

    stringstream ss(input);
    int money;
    while (ss >> money) {
        nums.push_back(money);
    }

    Solution solution;
    int maxAmount = solution.rob(nums);

    cout  << maxAmount << endl;

    return 0;
}
