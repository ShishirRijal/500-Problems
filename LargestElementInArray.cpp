    // bruteforce solution O(nlogn)
class Solution
{
public:

    // bruteforce solution
    // Time Complexity :  O(nlogn)
    // Space Complexity : O(n) 
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(), arr.end());
        return arr[n-1];
    }
};
  
    // optimized solution
    // Time Complexity :  O(n)
    // Space Complexity : O(1) 
 class Solution
{
public:

    // optimized solution O(n)
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

