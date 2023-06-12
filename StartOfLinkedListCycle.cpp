/*
    !Problem
    https://leetcode.com/problems/linked-list-cycle-ii/description/
*/

// Time Complexity = O(n)
// Auxiliary Space Complexity = O(n)
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> hash;
        ListNode* curr = head;
        while(curr) {
            if(hash.find(curr)!=hash.end())
                return curr;
            else {
                hash.insert(curr);
            }
            curr=curr->next;
        }
        return NULL;
    }
};


// Time Complexity = O(n)
// Auxiliary Space Complexity = O(1)

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast) {
      slow = head;
        while (slow != fast) {
          slow = slow->next;
          fast = fast->next;
        }
        return slow;
      }
    }
    return nullptr;
    }
};