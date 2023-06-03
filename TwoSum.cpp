/*
    !Problem
    https://leetcode.com/problems/two-sum/description/
*/

// ! Bruteforce Solution
    // Time Complexity: O(n^2)
    // Auxiliary Space Complexity: O(1)

    class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if(nums[i] + nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                     break;
                }
            }
        }
    return ans;
    }
};


// ! Optimal Solution
    // Time Complexity: O(n.logn)
    // Auxiliary Space Complexity: O(n)

    class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> hash;
        for(int i=0; i<nums.size(); i++)  {
            int diff = target-nums[i];
            // in case the another element is found
           if(hash.find(diff) != hash.end()) {
               ans.push_back(i);
               ans.push_back((hash.find(diff))->second);
               return ans;
            }
            // if not found push this element to the map
            hash[nums[i]] = i;
        }
        return ans;
    }
};