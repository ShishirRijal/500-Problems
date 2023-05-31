/*
    ! Problem
     https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array
*/


    //! Bruteforce solution
    // Time Complexity :  O(nlogn)
    // Space Complexity : O(1) 
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(), arr.end());
        return arr[n-1];
    }
};
  
    //! Optimized solution
    // Time Complexity :  O(n)
    // Space Complexity : O(1) 
 class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = arr[0];
        for(int i=0; i<n; i++)
        {
            if(arr[i] > max)
                max = arr[i];
        }
        return max;
    }
    
};

