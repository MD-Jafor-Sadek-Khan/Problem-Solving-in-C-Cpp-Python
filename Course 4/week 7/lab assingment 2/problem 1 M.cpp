#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int fib(int n) {
        vector<int> memo(n + 1, -1);  // Memoization table

        return fibHelper(n, memo);
    }

private:
    int fibHelper(int n, vector<int>& memo) {
        if (n <= 1) {
            return n;
        }

        if (memo[n] != -1) {
            return memo[n];
        }

        memo[n] = fibHelper(n - 1, memo) + fibHelper(n - 2, memo);
        return memo[n];
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
