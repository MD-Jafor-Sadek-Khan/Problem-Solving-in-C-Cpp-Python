#include <iostream>
#include <unordered_map>

using namespace std;

bool canFormPalindrome(const string& str) {
    unordered_map<char, int> charCount;

    for (char c : str) {
        charCount[c]++;
    }

    int oddCount = 0;

    for (const auto& pair : charCount) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }

    return oddCount <= 1;
}

int main() {
    string str;
    cin >> str;

    if (canFormPalindrome(str)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
