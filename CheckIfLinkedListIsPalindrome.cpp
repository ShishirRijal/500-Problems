

/*
    !Problem 
https://leetcode.com/problems/palindrome-linked-list/description/
*/

// Time Complexity: O(n)
// Auxiliary Space Complexity: O(n)

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* curr = head;
        // push all nodes val to stack
        while(curr!=nullptr) {
            s.push(curr->val);
            curr=curr->next;
        }
        // start popping
        curr = head;
        while(curr!=nullptr) {
            if(curr->val == s.top())
            {
                s.pop();
            }
            else 
                return false;
            curr=curr->next;
        }
        if(s.empty())
            return true;
        return false;
    }
};




// Time Complexity: O(n)
// Auxiliary Space Complexity: O(1)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
    bool isPalindrome(ListNode* head) {
     if (head == nullptr || head->next == nullptr)
        return true;

    ListNode* slow = head;
    ListNode* fast = head;

    // Finding the middle node of the linked list
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reversing the second half of the linked list
    ListNode* secondHalf = reverseList(slow);
    ListNode* firstHalf = head;

    // Comparing the reversed second half with the first half
    while (secondHalf != nullptr) {
        if (firstHalf->val != secondHalf->val)
            return false;

        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;       
    }
};