/*
    ! Problem
    https://practice.geeksforgeeks.org/problems/find-length-of-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-length-of-loop
*/



// Time Complexity: O(n)
// Auxiliary Space Complexity: O(1)
int countNodesinLoop(struct Node *head)
{
    struct Node* slow = head;
    struct Node* fast = head;
    
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast)
        {
            // Loop is found, count the nodes in the loop
            int count = 1;
            while (slow->next != fast)
            {
                slow = slow->next;
                count++;
            }
            return count;
        }
    }
    
    // No loop found
    return 0;
}