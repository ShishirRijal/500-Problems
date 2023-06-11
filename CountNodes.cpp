/*
    !Problem
    https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=count-nodes-of-linked-list
*/

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        Node* curr = head;
        int len = 0;
        while(curr!=NULL)
        {
            curr=curr->next;
            len+=1;
        }
    return len;
    }
};