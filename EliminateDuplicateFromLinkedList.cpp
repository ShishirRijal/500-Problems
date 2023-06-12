#include<iostream>
#include<unordered_set>
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

void display(Node* head) {
    Node* curr = head;
    while(curr!=NULL) {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}


void removeDuplicated(Node* head) {
    unordered_set<int> hash;
    Node* curr = head;
    Node* prev = NULL;
    while(curr!=NULL) {
        // if a node is already in hash, it means it is duplicate
        if(hash.find(curr->data)!=hash.end())
        {// so remove it
            Node* temp = curr;
            prev->next = curr->next;
            delete temp;
        }
        else {
            hash.insert(curr->data);
        }
        prev = curr;
        curr=curr->next;
    }
}

int main() {
    Node* head = new Node(5);
    Node* second = new Node(45);
    head->next = second;
    Node* third = new Node(223);
    second->next = third; 
    Node* fourth = new Node(45);
    third->next = fourth;
    removeDuplicated(head);
    display(head);

    return 0;
}