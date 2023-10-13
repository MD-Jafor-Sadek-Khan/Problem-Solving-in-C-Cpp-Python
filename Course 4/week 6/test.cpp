#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool canFormPalindromeDFS(const unordered_map<char, int>& charCount, int oddCount) {
    if (oddCount > 1) {
        return false;  // More than one character with odd count, not possible to form a palindrome
    }

    // Check if all characters have even count
    for (const auto& pair : charCount) {
        if (pair.second % 2 != 0) {
            return false;  // Found a character with odd count, not possible to form a palindrome
        }
    }

    return true;
}

void dfs(const string& str, unordered_map<char, int>& charCount, int& oddCount, vector<char>& path) {
    if (path.size() == str.size()) {
        // Reached the end of the string, check if a palindrome can be formed
        if (canFormPalindromeDFS(charCount, oddCount)) {
            cout << "YES" << endl;
            exit(0);  // Terminate the program since we found a valid palindrome
        }
        return;
    }

    // Try all possible choices for the next character in the path
    for (char c : str) {
        if (charCount[c] > 0) {
            charCount[c]--;        // Choose the character
            path.push_back(c);     // Add it to the path
            oddCount += charCount[c] % 2 == 1 ? 1 : -1;  // Update odd count

            dfs(str, charCount, oddCount, path);

            charCount[c]++;        // Undo the choice
            path.pop_back();       // Remove the character from the path
            oddCount += charCount[c] % 2 == 0 ? 1 : -1;  // Update odd count
        }
    }
}

bool canFormPalindrome(const string& str) {
    unordered_map<char, int> charCount;
    int oddCount = 0;

    // Count the frequency of each character in the string
    for (char c : str) {
        charCount[c]++;
        oddCount += charCount[c] % 2 == 1 ? 1 : -1;
    }

    vector<char> path;
    dfs(str, charCount, oddCount, path);

    return false;  // No valid palindrome found
}

int main() {
    string str;
    cout << "Enter a string of small letters: ";
    cin >> str;

    if (canFormPalindrome(str)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
