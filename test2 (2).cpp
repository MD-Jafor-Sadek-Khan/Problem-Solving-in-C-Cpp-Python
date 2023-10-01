#include <bits/stdc++.h>

using namespace std;

class MaxHeap {
public:

    vector<int> heap;
    void insert(int x) {
        heap.push_back(x);
        int idx = heap.size() - 1;
        while (idx > 0 && heap[(idx - 1) / 2] < heap[idx]) {
            swap(heap[idx], heap[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    int extractMax() {
        int maxVal = heap[0];
        heap[0] = heap[heap.size() - 1];
        heap.pop_back();
        int idx = 0;
        while (idx < heap.size()) {
            int left = 2 * idx + 1;
            int right = 2 * idx + 2;
            int largest = idx;
            if (left < heap.size() && heap[left] > heap[largest]) {
                largest = left;
            }
            if (right < heap.size() && heap[right] > heap[largest]) {
                largest = right;
            }
            if (largest != idx) {
                swap(heap[idx], heap[largest]);
                idx = largest;
            }
            else {
                break;
            }
        }
        return maxVal;
    }

    int getMax() {
        if (heap.size() == 0) {
            return INT_MIN;
        }
        return heap[0];
    }

    int size() {
        return heap.size();
    }

    void clear() {
        heap.clear();
    }
};

class MinHeap {
public:
    MaxHeap mx;

    void insert(int x) {
        mx.insert(-x);
    }

    void Delete(int idx) {
        if (idx >= mx.size() || idx < 0) {
            return;
        }
        int lastVal = mx.extractMax();
        if (idx == mx.size()) {
            return;
        }
        mx.heap[idx] = lastVal;
        int currIdx = idx;
        while (currIdx > 0 && mx.heap[(currIdx - 1) / 2] < mx.heap[currIdx]) {
            swap(mx.heap[currIdx], mx.heap[(currIdx - 1) / 2]);
            currIdx = (currIdx - 1) / 2;
        }
    }

    int getMin() {
        if (mx.size() == 0) {
            return INT_MAX;
        }
        return -mx.getMax();
    }
};

int main() {
    MinHeap minHeap;
    minHeap.insert(3);
    minHeap.insert(2);
    minHeap.insert(1);
    minHeap.insert(15);
    cout << minHeap.getMin() << endl; // 1
    minHeap.Delete(1);
    cout << minHeap.getMin() << endl; // 2
    minHeap.Delete(10);
    cout << minHeap.getMin() << endl; // 2
    minHeap.insert(0);
    cout << minHeap.getMin() << endl; // 0#include <iostream>
#include <deque>
using namespace std;

void print(deque<int> dq) {
    for (int i : dq) {
        cout << i << " ";
    }
    cout << endl;
}

void sort(int a[], int n) {
    deque<int> dq;

    for (int i = 0; i < n; i++) {
        if (dq.empty()) {
            dq.push_back(a[i]);
        }
        else if (a[i] <= dq.front()) {
            dq.push_front(a[i]);
        }
        else {
            while (!dq.empty() && a[i] > dq.back()) {
                dq.pop_back();
            }
            dq.push_back(a[i]);
        }

        int k = i - n/2 + 1;
        if (k < 0) {
            continue;
        }
        else if (dq.front() < a[k]) {
            a[k] = dq.front();
        }

        if (dq.size() > n/2 + 1) {
            dq.pop_front();
        }
    }

    print(dq);
    for (int i = n/2 + 1; i < n; i++) {
        a[i] = dq.front();
        dq.pop_front();
    }
    print(dq);
}

int main() {
    int n = 6;
    int a[] = {1, 3, 5, 7, 2, 0};

    sort(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

    return 0;
}
