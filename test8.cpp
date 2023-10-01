#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Queue {
    private:
        T* arr;
        int capacity;
        int frontIndex;
        int backIndex;
        int size;

    public:
        Queue(int capacity = 10) {
            this->capacity = capacity;
            arr = new T[capacity];
            frontIndex = -1;
            backIndex = -1;
            size = 0;
        }

        ~Queue() {
            delete[] arr;
        }

        void enqueue(T item) {
            if (size == capacity) {

                capacity *= 2;
                T* newArr = new T[capacity];


                for (int i = 0; i < size; i++) {
                    newArr[i] = arr[(frontIndex + i) % (capacity / 2)];
                }


                frontIndex = 0;
                backIndex = size - 1;
                delete[] arr;
                arr = newArr;
            }

            if (frontIndex == -1) {
                frontIndex = 0;
            }

            backIndex = (backIndex + 1) % capacity;
            arr[backIndex] = item;
            size++;
        }

        void dequeue() {
            if (size == 0) {
                cout << "Error: Queue is empty\n";
                return;
            }

            frontIndex = (frontIndex + 1) % capacity;
            size--;

            if (size == 0) {
                frontIndex = -1;
                backIndex = -1;
            }
        }

        T front() {
            if (size == 0) {
                cout << "Error: Queue is empty\n";
                return T();
            }

            return arr[frontIndex];
        }

        int getSize() {
            return size;
        }

        bool isEmpty() {
            return size == 0;
        }
};

int main() {
    Queue<int> q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "Front element: " << q.front() << endl;
    cout << "Size: " << q.getSize() << endl;

    q.dequeue();
    cout << "Front element: " << q.front() << endl;
    cout << "Size: " << q.getSize() << endl;

    q.enqueue(4);
    q.enqueue(5);
    cout << "Size: " << q.getSize() << endl;

    q.enqueue(6);
    q.enqueue(7);
    cout << "Size: " << q.getSize() << endl;

    q.enqueue(8);
    q.enqueue(9);
    cout << "Size: " << q.getSize() << endl;

    q.enqueue(10);
    cout << "Size: " << q.getSize() << endl;

    return 0;
}
