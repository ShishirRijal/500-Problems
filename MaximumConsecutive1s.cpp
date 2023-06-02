/*
    ! Problem
    https://leetcode.com/problems/max-consecutive-ones/description/
*/

// ! Optimal Solution
    // Time Complexity: O(n)
    // Auxiliary Space Complexity: O(1)


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0, result =0; 
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 1)    
               {
                   count++;
                   result = max(result, count);
               }
            else 
                count =0;
        }
        
        return result;
    }
};