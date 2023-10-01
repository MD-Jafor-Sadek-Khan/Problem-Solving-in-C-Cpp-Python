#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string word, int start, int endd) {
    if (start >= endd) {
        return true;
    }

    if (word[start] == word[endd]) {
        return isPalindrome(word, start + 1, endd - 1);
    } else {
        return false;
    }
}

int main() {
    string word;
    cin >> word;
    if (isPalindrome(word, 0, word.length() - 1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

