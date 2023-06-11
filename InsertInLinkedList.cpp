/*
    !Problem
    https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=linked-list-insertion
*/


class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node* newNode = new Node(x);
       // make it new one head, and let it point to previous head
       // even if head = NULL, new node will point to null
       newNode->next = head;
       head = newNode;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        Node* newNode = new Node(x);
        // if head is NULL, make it head
        if(head == NULL)
        {
           return newNode;
        }
        else {
            Node* curr = head;
            while(curr->next!=NULL) {
                curr=curr->next;
            }
            curr->next = newNode;
        }
        return head;
    }
};