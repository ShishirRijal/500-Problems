/*
    !Problem
    https://leetcode.com/problems/sort-list/description/
*/


// Time Complexity : O(n.logn)
// Auxiliary Space complexity: O(n)
class Solution {
public:

ListNode* merge(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* tail = &dummy;

    while (l1 && l2) {
        if (l1->val <= l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1)
        tail->next = l1;
    else if (l2)
        tail->next = l2;

    return dummy.next;
}

ListNode* mergeSort(ListNode* head) {
    if (!head || !head->next)
        return head;

    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = nullptr;

    while (fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = nullptr; // Split the list into two halves

    ListNode* left = mergeSort(head);
    ListNode* right = mergeSort(slow);

    return merge(left, right);
}

ListNode* sortList(ListNode* head) {
    return mergeSort(head);
}
};



