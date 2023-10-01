#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node<T>* next;
    Node(T d) : data(d), next(NULL) {}
};

template <class T>
class Stack
{
private:
    Node<T>* top;
    int size;
public:
    Stack() : top(NULL), size(0) {}
    ~Stack()
    {
        clear();
    }
    bool isEmpty()
    {
        return top == NULL;
    }
    T Top()
    {
        return top ? top->data : NULL;
    }
    void push( T& val)
    {
        Node<T>* newNode = new Node<T>(val);
        newNode->next = top;
        top = newNode;
        size++;
    }
    void pop()
    {
        if (!isEmpty())
        {
            Node<T>* temp = top;
            top = top->next;
            delete temp;
            size--;
        }
    }
    void print()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            Node<T>* temp = top;
            cout << "Stack: ";
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    void clear()
    {
        while (!isEmpty())
        {
            pop();
        }
    }
    void reverse()
    {
        if (isEmpty() || top->next == NULL)
        {
            return;
        }
        Node<T>* prevNode = NULL;
        Node<T>* currNode = top;
        Node<T>* nextNode = top->next;
        while (nextNode != NULL)
        {
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
            nextNode = currNode->next;
        }
        currNode->next = prevNode;
        top = currNode;
    }
    void sort()
    {
        if (isEmpty() || top->next == NULL)
        {
            return;
        }
        int tempSize = size;
        T* tempArray = new T[tempSize];
        for (int i = 0; i < tempSize; i++)
        {
            tempArray[i] = top->data;
            pop();
        }
        std::sort(tempArray, tempArray + tempSize);
        for (int i = tempSize - 1; i >= 0; i--)
        {
            push(tempArray[i]);
        }
        delete[] tempArray;
    }
    int getSize()
    {
        return size;
    }
};

int main()
{
    Stack<int> s;
    bool flag = true;
    while (flag)
    {
        cout << "1. Push 2. Pop 3. Print 4. Clear 5. Reverse 6. Sort 7. Get Size 8. Quit" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case(1):
            cout << "Enter a number to push in Stack: ";
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
            s.clear();
            cout << "Stack is cleared" << endl;
            break;
        case(5):
            s.reverse();
            cout << "Stack is reversed" << endl;
            break;
        case(6):
            s.sort();
            cout << "Stack is sorted" << endl;
            break;
        case(7):
            cout << "Stack size is " << s.getSize() << endl;
            break;
        case(8):
            flag = false;
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
