#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }

        vector<int> dp(n + 1);  // Tabulation table
        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2; i <= n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};

int main() {
    Solution solution;
  
    int n;
   
    cin >> n;
    
    int fibonacci = solution.fib(n);
    
    cout<< fibonacci << endl;
    
    return 0;
}
