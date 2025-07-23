#include <iostream>
using namespace std;

struct Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data,Node* next,Node* back){
        this->data = data;
        this->next = next;
        this->back = back;
    }

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->back = nullptr;
    }
};

Node* ArrayToDLL(int arr[],int size){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1;i<size;i++){
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }
    return head;
}

void printingDLL(Node* head) {
    Node* mover = head;
    while(mover != NULL) {
        cout<<mover->data<<" ";
        mover = mover->next;
    }
}

Node* deleteHead(Node* head){
    if(head == nullptr || head->next == nullptr){
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    free(temp);

    return head;
}

Node* deleteTail(Node* head) {
    if(head == nullptr || head->next == nullptr){
        return NULL;
    }
    Node* tail = head;
    while(tail->next != nullptr) {
        tail = tail->next;
    }
    Node* prev = tail->back;
    tail->back = nullptr;
    prev->next = nullptr;

    free(tail);
    return head;
}

int main(){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    Node* head = ArrayToDLL(arr,size);

    head = deleteHead(head);
    head = deleteTail(head);
    printingDLL(head);
    return 0;
}