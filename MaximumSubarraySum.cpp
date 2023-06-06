/*
    ! Problem
    https://leetcode.com/problems/maximum-subarray/
*/


// ! BruteForce Solution
// * Time: O(n^3)
// * Space: O(1)

// ! Better Solution
// * Time: O(n^2)
// * Space: O(1) 

// ! Optimal Solution * Kadane's Algorithm
// * Time: O(n)
// * Space: O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0], result=nums[0];
        for(int i=1; i<n; i++) {
            if(sum+nums[i] > nums[i])
            {
                sum+=nums[i];
            }
            else {
                sum=nums[i];
            }
            result = max(result, sum);
        }
        return result;
    }
};