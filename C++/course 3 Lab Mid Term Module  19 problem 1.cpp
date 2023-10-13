#include <bits/stdc++.h>

using namespace std;

void reverseVector(vector<int>& v) {
    int start = 0;
    int endd = v.size() - 1;

    while (start < endd) {
        int temp = v[start];
        v[start] = v[endd];
        v[endd] = temp;

        start++;
        endd--;
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);


    for (int i = 0; i < v.size(); i++) {
        cin>>v[i];
    }


    reverseVector(v);


    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

