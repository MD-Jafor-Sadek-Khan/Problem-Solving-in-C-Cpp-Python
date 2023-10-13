#include <iostream>

using namespace std;

template <class T>
class node {
public:
    T data;
    node<T>* next;
};

template <class T>
class Stack {
private:
    node<T>* top;
public:
    Stack() {
        top = nullptr;
    }
    bool isEmpty() const {
        return top == nullptr;
    }
    T Top() const {
        if (top) {
            return top->data;
        }
        else {
            cout << "Stack is empty" << endl;
            return T();
        }
    }
    void push(const T& val) {
        if (top == nullptr) {
            top = new node<T>;
            top->next = nullptr;
            top->data = val;
        }
        else {
            node<T>* temp = new node<T>;
            temp->data = val;
            temp->next = top;
            top = temp;
        }
    }
    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }
        else {
            cout << top->data << " is popped" << endl;
            node<T>* temp = top;
            top = top->next;
            delete temp;
        }
    }
    void print() const {
        node<T>* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack<int> s;
    bool flag = true;
    while (flag) {
        cout << "1. Push   2. Pop    3. Print    4. Quit" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
        case(1):
            cout << "Enter a number to push in Stack? "<<endl;
            int n;
            cin >> n;
            s.push(n);
            break;
        case(2):
            s.pop();
            break;
        case(3):
            s.print();
            break;
        case(4):
            cout << "Exiting " << endl;
            flag = false;
            break;
        default:
            cout << "Invalid choice " << endl;
            break;
        }
    }
    return 0;
}
