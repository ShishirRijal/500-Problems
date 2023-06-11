/*
    ! Problem
    https://leetcode.com/problems/linked-list-cycle/description/
*/


class Solution {
public:
    bool hasCycle(ListNode *head) {
        // if the list is empty or a has single node, it can't be circular
        if(head==NULL || head->next==NULL) return false;
        
        // The idea is to define two pointers 
        // One is fast pointer that moves two nodes at a time
        // Another is slow pointer that moves one node at a time
        ListNode* slow = head;
        ListNode* fast = head->next;
        // let's loop until these two are equal
        while(fast!=slow) {
            // if we have reached the end of list, it's not circular
            if(fast->next==NULL || fast->next->next == NULL) 
                return false;
            slow=slow->next;
            fast=fast->next->next;
        }
        // if function completes the loop it means the it is circular
        return true;
    }
};