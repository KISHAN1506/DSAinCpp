#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data,Node* next){
        this->data = data;
        this->next = next;
    }
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class Stack {
    Node* top;
    int size = 0;

public:

    void push(int x) {
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
        size = size + 1;
    }
    void pop() {
        if (top == nullptr) return;
        Node* temp = top;
        top = top->next;
        delete temp;
        size = size - 1;
    }
    int getSize() {
        return size;
    }
    int getTop() {
        return top->data;
    }
};


int main(){
    
    return 0;
}