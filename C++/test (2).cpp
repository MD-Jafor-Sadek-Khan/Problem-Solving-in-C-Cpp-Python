#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* prev;
    Node* next;

    Node(int val) {
        value = val;
        prev = nullptr;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertHead(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertTail(int val) {
        Node* newNode = new Node(val);
        if (tail == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

   void insertMid(int value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *slow = head;
    Node *fast = head->next;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    newNode->next = slow->next;
    newNode->prev = slow;
    if (slow->next != nullptr) {
        slow->next->prev = newNode;
    }
    slow->next = newNode;
    if (newNode->next == nullptr) {
        tail = newNode;
    }
}


    void print() {
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->value << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    void Merge(LinkedList a) {
        if (a.head == nullptr) {
            return;
        }
        if (head == nullptr) {
            head = a.head;
            tail = a.tail;
            return;
        }
        tail->next = a.head;
        a.head->prev = tail;
        tail = a.tail;
    }
};

int main() {

    LinkedList ll;
    cout<<"ll"<<endl;

    ll.insertHead(2);
    ll.print();
    ll.insertHead(1);
    ll.print();
    ll.insertTail(4);
    ll.print();
    ll.insertTail(5);
    ll.print();
    ll.insertMid(3);
    ll.print();

    cout<<endl<<"ll2"<<endl;
    LinkedList ll2;
    ll2.insertTail(6);
    ll2.print();
    ll2.insertTail(7);
    ll2.print();
    ll2.insertTail(8);
    ll2.print();

    cout<<endl<<"after merging ll becoms"<<endl;
    ll.Merge(ll2);
    ll.print();

    return 0;
}
