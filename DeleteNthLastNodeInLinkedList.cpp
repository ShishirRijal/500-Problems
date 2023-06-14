/*
    !Problem
    https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
*/

// Time Complexity: O(n) // two traversals
// Auxiliary Space Complexity: O(1)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        // let's first count the nodes
        int count = 0;
        ListNode* curr = head;

        while(curr!=nullptr) {
            count++;
            curr=curr->next;
        }
        // now let's find position of node from first
        int pos = count-n;
               // if n = 1
        if((head->next == nullptr &&  n==1) || pos ==0) {
            ListNode* temp = head;
            head=head->next;
            delete temp;
            return head;
        } 

        count =1;
        curr = head;
        while(count<pos) {
            curr=curr->next;
            count++;
        }
        if(curr!=nullptr) 
        {
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
        }
        return head; 
    }
};



// Time Complexity: O(n)
// Auxiliary Space Complexity: O(1)
//* Two pointer approach
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * start = new ListNode();
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        return start->next;
    }
};