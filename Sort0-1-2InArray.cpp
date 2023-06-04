/*
  !Problem:
      https://leetcode.com/problems/sort-colors/

*/

// ! Brute Force Approach // merge sort
    // * Time Complexity: O(NlogN)
    // * Space Complexity: O(n)

// ! Better Approach // Counting 
    // * Time Complexity: O(N)
    // * Space Complexity: O(1)
     //-> Count the number of 0's, 1's and 2's. Then store all the 0's first, then 1's and followed by 2's.

// ! Optimal Approach 
    // * Time Complexity: O(N)
    // * Space Complexity: O(1)
// * Using DUTCH NATIONAL FLAG ALGORITHM

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // solving by Dutch National Flag Algorithm
        int low =0, mid = 0, high = nums.size()-1;
        while(mid<=high) {
            if(nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++; mid++;
            }
            else if(nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};