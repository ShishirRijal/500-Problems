/*
    !Problem
    https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=delete-a-node-in-single-linked-list
*/

Node* deleteNode(Node *head,int x)
{
    // if list is already empty, no need to delete
    if(head == NULL)
        return NULL;
    // check if the position is valid
    if(x<1)
        return NULL;
    else if(x==1){
        // delete head
        Node * temp = head;
        head=head->next;
        delete temp;
        return head;
    }
    else {
        int pos = 1;
        Node * curr = head;
        while(pos<x-1 && curr->next!=NULL){
            curr=curr->next;
            pos++;
        }
        // position out of range
        if(curr==NULL)
            return NULL;
        else {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
    }
    return head;
}