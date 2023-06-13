/*
    !Problem
https://leetcode.com/problems/odd-even-linked-list/description/
*/

// Time Complexity: O(n)
// Auxiliary Space Complexity: O(1)

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
    if (!head || !head->next)
        return head;
    ListNode* oddHead = head;
    ListNode* oddTail = head;
    ListNode* evenHead = head->next;
    ListNode* evenTail = head->next;
    ListNode* currNode = head->next->next;
    int index = 3;

    while (currNode) {
        if (index % 2 != 0) { // Odd index
            oddTail->next = currNode;
            oddTail = currNode;
        } else { // Even index
            evenTail->next = currNode;
            evenTail = currNode;
        }

        currNode = currNode->next;
        index++;
    }

    oddTail->next = evenHead;
    evenTail->next = nullptr;

    return oddHead;
    }
};