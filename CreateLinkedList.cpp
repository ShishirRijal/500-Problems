/*
    !Problem
    https://practice.geeksforgeeks.org/problems/introduction-to-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-linked-list
*/

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        if(arr.size()==0) return NULL;
        
       Node* head= new Node();
       head->data = arr[0];
       head->next = NULL;
       Node* curr = head;
        for(int i=1; i<arr.size(); i++) {
            Node *temp = new Node();
            temp->data = arr[i];
            temp->next = NULL;
            curr->next = temp;
            curr = curr->next;
        }
        
       return head;
    }
    
};