/*
    !Problem
    https://leetcode.com/problems/next-greater-element-ii/
*/

    // Time Complexity = O(2n+2n)
    // Auxiliary space complexity = O(n)
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector <int> nge(n, -1);
        for(int i=(2*n)-1; i>=0; i--) {
            while(!st.empty() && nums[i%n]>=st.top())
                st.pop();
            // we don't find next greater for other half virtual array
            if(i<n){
                if(!st.empty())
                    nge[i] = st.top();
            }
            st.push(nums[i%n]);
        }
        return nge;
    }
};