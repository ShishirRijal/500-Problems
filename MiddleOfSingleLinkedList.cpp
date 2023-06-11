/*
    !Problem
    https://leetcode.com/problems/middle-of-the-linked-list/description/
*/


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* curr = head;
        while(curr!=NULL)
        {
            curr = curr->next;
            count++;
        }
        int middle = count%2==0 ? (count/2)+1 : ceil((double)count/2);
        count = 1;
        curr = head;
        while(true){
            if(count==middle)
                return curr;
            else {
                curr= curr->next;
                count++;
            }
        }
        return head;
    }
};