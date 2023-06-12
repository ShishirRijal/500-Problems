#include<iostream>
#include<list>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
    Node(){}
    Node(int x){
        this->data = x;
        this->next = NULL;
    }
};

void displayReverse(Node* head) {
    if(head == NULL )
        return;
    displayReverse(head->next);
    cout<<head->data<<" ";

}

int main() {
    Node* head = new Node(5);
    Node* second = new Node(45);
    head->next = second;
    Node* third = new Node(223);
    second->next = third;

    displayReverse(head);

    return 0;
}