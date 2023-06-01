/*
    ! Problem
 https://leetcode.com/problems/rotate-array/description/
 */


//! Optimal Approach
    // Time Complexity = O(n)
    // Auxiliary Space Complexity = O(1)
    // This one is quite similar to the left rotate problem.. 
    // Observe the problem and solution array and write code...
   class Solution{
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	    k = k%n;
	   reverse(arr,arr+k);
	   reverse(arr+k, arr+n);
	   reverse(arr, arr+n);
	} 

};