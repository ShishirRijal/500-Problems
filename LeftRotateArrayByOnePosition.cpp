/*
    ! Problem
https://www.codingninjas.com/codestudio/problems/left-rotate-an-array-by-one_5026278?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
*/

//! Optimal Approach
    // Time Complexity = O(n)
    // Auxiliary Space Complexity = O(1)
    // Two pointer approach
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0];
    for(int i=1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}
