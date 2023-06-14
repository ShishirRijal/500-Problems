/*
    !Problem
    https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/
*/


// Time Complexity: O(n)
// Auxiliary Space Complexity: O(1)
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // Empty list or only one node, no middle node to delete
        if (!head ) {
        return head;
        }
        if(!head->next) {
            delete head;
            return nullptr;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next->next && fast->next->next->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        // by this time slow is pointing to the middle-1 element
        ListNode* middle = slow->next;
        slow->next = slow->next->next;
        delete middle;
        return head;
    }
};