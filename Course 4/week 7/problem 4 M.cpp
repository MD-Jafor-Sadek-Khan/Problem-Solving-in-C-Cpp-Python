#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        vector<int> memo(n + 1, -1);
        return tribonacciHelper(n, memo);
    }

private:
    int tribonacciHelper(int n, vector<int>& memo) {
        if (n == 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;

        if (memo[n] != -1)
            return memo[n];

        int tn = tribonacciHelper(n - 1, memo) + tribonacciHelper(n - 2, memo) + tribonacciHelper(n - 3, memo);
        memo[n] = tn;
        return tn;
    }
};

int main() {
    int n;
   
    cin >> n;

    Solution solution;
    int result = solution.tribonacci(n);
    cout << result << endl;
    return 0;
}
