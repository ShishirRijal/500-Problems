/*
    ! Problem
    https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays
*/




// ! BruteForce Approach
    // Time Complexity = O(n.logn + m.logm)
    // Auxiliary Space Complexity = O(n+m)

    class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int> s;
        for(int i=0;i<n; i++) 
            s.insert(arr1[i]);
        for(int i=0; i<m; i++) 
            s.insert(arr2[i]);
        vector<int> result;
        for(auto x:s) {
            result.push_back(x);
        }
        return result;
    }
};


// ! Optimal Approach
    // Time Complexity = O(n+m)
    // Auxiliary Space Complexity = O(1)
    
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> ans;
        
        int i=0, j=0;
        // check each array parallely
        while(i<n && j<m) {
            if(arr1[i] < arr2[j]) {
                if(ans.size()==0 || ans.back()!=arr1[i])
                    ans.push_back(arr1[i]);
                i++;
            }
            else {
                if(ans.size()==0 || ans.back()!=arr2[j])
                    ans.push_back(arr2[j]);
            j++;
            }
        }
        // when one of the array is exhausted, check each one individually
        while(i<n){
            if(ans.size()==0 || ans.back()!=arr1[i])
                    ans.push_back(arr1[i]);
                i++;
        }
        while(j<m){
            if(ans.size()==0 || ans.back()!=arr2[j])
                    ans.push_back(arr2[j]);
                j++;
        }
        
    return ans;        
        
    }
};