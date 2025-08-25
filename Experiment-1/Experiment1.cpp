#include <iostream>
using namespace std;

template <typename T, int MAX_SIZE = 100>
class Stack {
    T arr[MAX_SIZE];
    int topIndex;
public:
    Stack() : topIndex(-1) {}

    bool isEmpty() const {
        return topIndex == -1;
    }

    bool isFull() const {
        return topIndex == MAX_SIZE - 1;
    }

    void push(const T& value) {
        if (isFull()) {
            cout << "Stack is full. Cannot push.\n";
            return;
        }
        arr[++topIndex] = value;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop.\n";
            return;
        }
        --topIndex;
    }

    T top() const {
        if (isEmpty()) {
            cout << "Stack is empty. No top element.\n";
            return T();
        }
        return arr[topIndex];
    }
};

int main() {
    Stack<int, 5> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    s.pop();
    cout << "Top after pop: " << s.top() << endl;

    s.pop();
    s.pop();
    s.pop(); 

    if (s.isEmpty())
        cout << "Stack is empty now.\n";
    else
        cout << "Stack is not empty.\n";

    return 0;
}