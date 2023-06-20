// https://www.geeksforgeeks.org/chocolate-distribution-problem/

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        long long result, diff;
        // let's first sort the array
        sort(a.begin(), a.end(), greater<int>()); // in descending
        result = a[0] - a[m-1]; // initialize result
        for(int i=1; i<n-(m-1); i++) { // loop till n-(m-1)
            diff = a[i] - a[i+m-1];
            if(diff<result) 
                result = diff;
        }
        return result;
    }   
};
