#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> memo;  // Memoization table

int minOperations(int n) {
    if (n == 1)
        return 0;

    if (memo[n] != -1)
        return memo[n];

    int result = 1 + minOperations(n - 1);

    if (n % 2 == 0)
        result = min(result, 1 + minOperations(n / 2));

    if (n % 3 == 0)
        result = min(result, 1 + minOperations(n / 3));

    memo[n] = result;
    return result;
}

int main() {
    int n;
    
    cin >> n;

    memo.resize(n + 1, -1);

    int minOps = minOperations(n);
    cout  << minOps << endl;

    return 0;
}
