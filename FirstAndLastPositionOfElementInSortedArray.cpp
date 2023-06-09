/*
    !Problem
     https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
*/


// Time Complexity: O(logn)
// Space Complexity: O(1)

class Solution {
public:
    int getOccurence(vector<int> &nums, int target, bool isFirst) {
        int l=0, h=nums.size()-1, mid, ans=-1;
            while(l<=h) {
            mid = l+(h-l)/2;
            if(nums[mid]== target) {
                ans = mid;
              isFirst?  h =  mid-1 : l=mid+1;
            }
            else if(nums[mid]<target) {
                l = mid+1;
           }else {
               h = mid-1;
            }
        } 
        return ans;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(getOccurence(nums, target, true));
        ans.push_back(getOccurence(nums, target, false));
        return ans;
         
    }
};