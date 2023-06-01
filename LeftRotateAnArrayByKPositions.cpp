/*
    ! Problem
https://practice.geeksforgeeks.org/problems/quick-left-rotation3806/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=quick-left-rotation
*/





//! BruteForce Approach
    // Time Complexity = O(n+d) , where d is the rotations to be made
    // Auxiliary Space Complexity = O(d)
class Solution{
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	    int d=k%n;
	    int temp[d];
	    // store first k duplicate elements in temp
	    for(int i=0; i<d; i++) 
            {
    	        temp[i] = arr[i];
            }
        // now rotate the array from kth index
        for(int i=d;i<n;i++) {
            arr[i-d] = arr[i];
        }
        // copy first k elements
        for(int i=n-d; i<n; i++) 
            arr[i] = temp[i-(n-d)];
	} 
	 

};





//! Optimal Approach
    // Time Complexity = O(n)
    // Auxiliary Space Complexity = O(1)
    // this solution is based on the observation.. 
	    // if we write final array and observe it, we see that
	    // we can get that array if we reverse array in parts
	    // 1. reverse (arr, arr+k)
	    // 2. reverse (arr+k, arr+n)
	    // 3. reverse (arr, arr+n) 
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