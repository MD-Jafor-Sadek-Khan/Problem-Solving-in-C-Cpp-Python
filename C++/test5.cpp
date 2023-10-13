#include <bits/stdc++.h>

using namespace std;

template<typename T>
class Deque {
private:
    template<typename U>
    class Node {
    public:
        U data;
        Node<U>* prev;
        Node<U>* next;

        Node(U val, Node<U>* p, Node<U>* n) : data(val), prev(p), next(n) {}
    };

    Node<T>* front_ptr;
    Node<T>* back_ptr;
    int size;

public:
    Deque() : front_ptr(NULL), back_ptr(NULL), size(0) {}

    bool empty()  {
        return size == 0;
    }

    int get_size()  {
        return size;
    }

    void push_front(T val) {
        Node<T>* new_node = new Node<T>(val, NULL, front_ptr);
        if (front_ptr != NULL) {
            front_ptr->prev = new_node;
        } else {
            back_ptr = new_node;
        }
        front_ptr = new_node;
        size++;
    }

    void push_back(T val) {
        Node<T>* new_node = new Node<T>(val, back_ptr, NULL);
        if (back_ptr != NULL) {
            back_ptr->next = new_node;
        } else {
            front_ptr = new_node;
        }
        back_ptr = new_node;
        size++;
    }

    void pop_front() {
        if (empty()) {
            return;
        }
        Node<T>* old_front = front_ptr;
        front_ptr = front_ptr->next;
        if (front_ptr != NULL) {
            front_ptr->prev = NULL;
        } else {
            back_ptr = NULL;
        }
        delete old_front;
        size--;
    }

    void pop_back() {
        if (empty()) {
            return;
        }
        Node<T>* old_back = back_ptr;
        back_ptr = back_ptr->prev;
        if (back_ptr != NULL) {
            back_ptr->next = NULL;
        } else {
            front_ptr = NULL;
        }
        delete old_back;
        size--;
    }

    T front()  {
        if (empty()) {
            return T();
        }
        return front_ptr->data;
    }

    T back()  {
        if (empty()) {
            return T();
        }
        return back_ptr->data;
    }
};

int main() {
    Deque<int> dq;

    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);
    cout <<"Front of Deque: "<< dq.front() <<endl;
    cout <<"Back of Deque: "<< dq.back() <<endl;

    dq.pop_front();
    dq.pop_back();

    cout <<"Front of Deque: "<< dq.front() <<endl;
    cout <<"Back of Deque: "<< dq.back() <<endl;

    dq.push_front(99);
    cout <<"Front of Deque: "<< dq.front() <<endl;
    dq.pop_back();
    cout <<"Back of Deque: "<< dq.back() <<endl;

    return 0;
}
