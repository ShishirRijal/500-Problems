/*
    ! Problem - Peak Index in a Mountain Array
    https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
*/


// Time Complexity: O(logn)
// Space Complexity: O(1)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0, h=arr.size()-1, mid;
        while(l<h) { // don't include '=' 
            mid = l+(h-l)/2;
            // found
            if(arr[mid-1]<arr[mid] && arr[mid+1] < arr[mid])
                return mid;
            // is in the increasing slope range
            else if( arr[mid] < arr[mid+1] ) {
                l=mid+1;
            }   
            // is in decreasing slope range
            else 
                h = mid;
        }
        return l;
    }
};