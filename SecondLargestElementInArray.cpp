/*
    ! Problem
https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

*/


    //! Bruteforce solution
    // Time Complexity :  O(nlogn)
    // Space Complexity : O(1) 
class Solution{
public:	
	int print2largest(int arr[], int n) {
	    sort(arr, arr+n);
	    int max = arr[n-1];
	    
	    for(int i=n-2; i>=0; i--) {
	        if(arr[i]!=max)
	        return arr[i];
	    }
	    return -1;
	}
};
  
//! Better Solution
    // Time Complexity :  O(n) // Two linear traversal
    // Space Complexity : O(1) 
class Solution{
public:	
	int print2largest(int arr[], int n) {
	   int max = arr[0];
	   int result = -1;
	   // let's first get the largest one
	   for(int i=1;i<n;i++)
	   {
	       if(arr[i] > max)
	        max = arr[i];
	   }
	   // now let's find the second largest...
	   for(int i=0; i<n; i++)
	   {
	       if(arr[i]>result && arr[i]!=max)
	        result = arr[i];
	   }
	   return result;
	}
};



    //! Optimized solution
    // Time Complexity :  O(n) // single pass
    // Space Complexity : O(1) 

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	   int max = arr[0], result = -1;
	   for(int i=0; i<n; i++) {
	       if(arr[i]>max)
	       {
	           result = max;
	           max = arr[i];
	       }
	       else if(arr[i] > result && arr[i]!=max)
	        result = arr[i];
	   }
	   return result;
	}
};