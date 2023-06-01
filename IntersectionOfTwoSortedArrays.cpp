/*
    ! Problem
https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
*/



// ! Optimal Approach
    // Time Complexity = O(n+m)
    // Auxiliary Space Complexity = O(1)
    
class Solution{
    public:
    vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
    {
        vector<int> result;
        int i=0, j=0;
        while(i<n && j<m) {
            if(arr1[i] == arr2[j])
                {
                    result.push_back(arr1[i]);
                    i++; j++;
                }
            else if(arr1[i] < arr2[j])
                i++;
            else j++;
        }
        return result;
    }
};