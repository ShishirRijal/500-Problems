/*
    ! Problem
    
*/
// ! BruteForce Solution
// * Time: O(n^2)
// * Space: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            int count = 0;
            for(int j=0; j<n; j++) {
                if(nums[i] == nums[j])
                    count++;
            }
            if(count>n/2){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};

// ! Better Solution
// * Time: O(n.logn)
// * Space: O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            hash[nums[i]]++;
        }
        // now let's check
        for(auto itr:hash) {
            if(itr->second > n/2) 
                return itr->first;
        }
        return -1;
    }
};

 
// ! Optimal Solution   * Moore's Voting Algorithm
// * Time: O(n)
// * Space: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       //* Using Moore's voting algorithm
       int ans, count=0; 
       for(int i=0; i<nums.size(); i++) {
           if(count==0) {
               ans = nums[i];
               count = 1;
           }
           else if(nums[i] == ans)
            count++;
            else 
                count--;
       }
       return ans;
    }
};