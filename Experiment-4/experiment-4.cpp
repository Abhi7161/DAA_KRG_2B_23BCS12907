#include <iostream>
using namespace std;

struct DNode {
    int data;
    DNode* prev;
    DNode* next;
    DNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};

DNode* head = nullptr;
DNode* tail = nullptr;

void insertAtBegin(int val) {
    DNode* node = new DNode(val);
    node->next = head;
    if (head) head->prev = node;
    head = node;
    if (!tail) tail = node;
}

void insertAtEnd(int val) {
    DNode* node = new DNode(val);
    node->prev = tail;
    if (tail) tail->next = node;
    tail = node;
    if (!head) head = node;
}

void deleteAtBegin() {
    if (!head) return;
    DNode* temp = head;
    head = head->next;
    if (head) head->prev = nullptr;
    else tail = nullptr;
    delete temp;
}

void deleteAtEnd() {
    if (!tail) return;
    DNode* temp = tail;
    tail = tail->prev;
    if (tail) tail->next = nullptr;
    else head = nullptr;
    delete temp;
}

void display() {
    DNode* curr = head;
    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
int main() {
    insertAtBegin(10);
    insertAtEnd(20);
    insertAtBegin(5);
    display();
    deleteAtBegin();
    display(); 
    deleteAtEnd();
    display();
    return 0;
}