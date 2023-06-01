/*
    ! Problem

https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=remove-duplicate-elements-from-sorted-array
*/



//! BruteForce Approach
    // Time Complexity = O(n.logn)
    // Space Complexity = O(n)
// Here the idea is that we iterate from first to last element of array
// and insert each element in a set. Since set does not allow duplicates,
// we will have only unique elements in the set. 
// Then we will iterate over the set and insert each element in the array at initial positions.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<nums.size(); i++)
            s.insert(nums[i]);
        int i=0;
        for(auto it:s) {
            nums[i++] = it;
        }
        return i;
    }
};


//! Optimal Approach
    // Time Complexity = O(n)
    // Space Complexity = O(1)
    // Two pointer approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1; j<nums.size(); j++)
        {
            if(nums[j]!=nums[i])
                nums[++i] = nums[j];
        }
        return ++i;
    }
};