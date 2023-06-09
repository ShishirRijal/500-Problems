/*
    ! Problem
    https://leetcode.com/problems/sqrtx/description/
*/



// Time Complexity: O(logn)
class Solution {
public:
    int mySqrt(int n) {
        int low = 0, high = n;
    int ans = -1;
    while(low<=high) {
        long long int mid = low + (high-low)/2;
        long long square = mid*mid;
        if(square == n)
            return mid;
        else if(square < n ) {
            ans = mid;
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }     
        return ans;
    }
};