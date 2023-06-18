/*
    !Problem
    https://leetcode.com/problems/trapping-rain-water/
*/


// * Two pointer approach   
// Time Complexity = O(n)
// Space Complexity = O(1)
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lmax = height[0];
        int rmax = height[n-1];
        int lpos = 0;
        int rpos = n-1;
        int water = 0;
        while(lpos <= rpos)
        {
            if(height[lpos]<=height[rpos]) {
                if(height[lpos] > lmax)
                    lmax = height[lpos];
                else 
                    water += lmax-height[lpos];
                lpos++;
            }
            else {
                if(height[rpos]>=rmax)
                    rmax = height[rpos];
                else 
                    water += rmax - height[rpos];
                rpos--;
            }
        
        }
        return water;
    }
};