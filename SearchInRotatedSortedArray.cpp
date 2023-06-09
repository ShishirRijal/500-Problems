/*
    ! Problem
    https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0
    //* Solved using Binary Search
*/


// Time Complexity: O(logn)
// Space Complexity: O(1)

int binarySearch(vector<int>& arr, int low, int high,  int k) {
    while(low<=high){
       int mid =  low + (high-low)/2;
        if(arr[mid]==k)
            return mid;
        else if(k > arr[mid])
            low = mid+1;
        else 
            high = mid-1;
    }
    return -1;
}

int getPivot(vector<int>& arr, int n, int k)
{
    int low = 0, high = n-1;
    while(low<high){
       int mid = low + (high-low)/2;
        if(arr[mid] >= arr[0])  
            low=mid+1;
        else
            high = mid;
    }
    return low;
}

int search(vector<int>& arr, int n, int k)
{
   int pivot=  getPivot(arr,  n,  k);
    if(arr[pivot] <= k && k<=arr[n-1])
    {
        //search in part II
     return    binarySearch(arr, pivot, n-1, k);
    }
    else {
        // search in part I
      return  binarySearch(arr, 0, pivot-1, k);
    }
    
}


