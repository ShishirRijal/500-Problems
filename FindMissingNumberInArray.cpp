/*
    ! Problem
    https://www.codingninjas.com/codestudio/problems/missing-number_6680467?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTab=0
*/

//! BruteForce Solution
    // Time Complexity: O(n^2)
    // Auxiliary Space Complexity: O(1)

int missingNumber(int A[], int N)
{
    for(int i=1; i<=N; i++) {
        bool isFound = false;
        for(int j=0; j<N-1; j++) {
            if(A[j] == i) {
                isFound = true; break;
            }
        }
        if(!isFound) {
            return i;
        }
    }
    return -1;
}


// ! Better Solution - Using hashmap
    // Time Complexity: O(n)
    // Auxiliary Space Complexity: O(n)
    
    int missingNumber(int A[], int N)
{
    int hash[N+1] = {0};
    for(int i=0; i<N-1; i++) {
        hash[A[i]] = 1;
    }
    for(int i=1; i<=N; i++) {
        if(hash[i]==0)
            return i;
    }
    return -1;
}


// ! Optimal Solution 
    // Time Complexity: O(n)
    // Auxiliary Space Complexity: O(1)

    // * Using sum of n natural numbers formula

    int missingNumber(int A[], int N)
{
    int sum = N*(N+1)/2;
    int temp = 0;
    for(int i=0; i<N-1; i++) {
        temp+=A[i];
    }
    return sum-temp;
}

// * Using XOR operator
int missingNumber(vector<int>&a, int N) {
     int xor1 = 0, xor2=0;
    for(int i=0; i<N-1; i++) {
        xor1= xor1^a[i]; // present elements
        xor2=xor2^(i+1); // all elements
    }
    xor2 = xor2^N; //xor the last number too
    return xor1^xor2;
}