#include <iostream>
using namespace std;

// Creation of pre made container for the LL
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

Node* LlCreationUsingArr(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void PrintingOfLL(Node* head) {
    Node* mover = head;
    while(mover != nullptr) {
        cout<<mover->data<<" ";
        mover = mover->next;
    }
}


Node* insertionOfHead(Node* head,int val){
    Node* temp = new Node(val,head);
    return temp;
}

Node* insertAtTail(Node* head,int val) {
        Node* temp = new Node(val);
        Node* mover = head;

        if(head == NULL){
            return temp;
        }

        while(mover->next != NULL){
            mover = mover->next;
        }

        mover->next = temp;
        return head;
}

int main(){
    vector<int> arr = {2,6,5,3};
    Node* head = nullptr;
    head = LlCreationUsingArr(arr);

    head = insertAtTail(head,4);
    PrintingOfLL(head);


    return 0;
}