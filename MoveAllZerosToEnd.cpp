/*
! Problem
https://leetcode.com/problems/move-zeroes/description/
*/


//! BruteForce Approach
    // Time Complexity = O(n)
    // Space Complexity = O(n)
// Here the idea is that we iterate from first to last element of array
// and insert all non-zero elements in a temporary array. 
// Then we will iterate over the temporary array and insert each element in the array at initial positions.
// Then, we will insert 0s at the end of the array.




//! Optimal Approach
    // Time Complexity = O(n)
    // Space Complexity = O(1)
    class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int curr = 0;
        for(int i=0;i<nums.size(); i++) {
            if(nums[i]!=0) 
                swap(nums[i], nums[curr++]);
        }
    }
};


