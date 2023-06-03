


// ! BruteForce Solution
    // Time Complexity: O(n^2)
    // Auxiliary Space Complexity: O(1)
class Solution{
public:	
	int search(int A[], int N){
	    for(int i=0; i<N; i++) {
	        bool isDuplicate = false;
	        for(int j=0; j<N; j++) {
	            if(i==j) // not for the same element
	                continue;
	           if(A[i]==A[j])
	               { isDuplicate = true; break;}
	                
	        }
	        if(!isDuplicate)
	            return A[i];
	    }
	    return -1;
	}
};



// ! Better solution 
    // Time Complexity: O(n)
    // Auxiliary Space Complexity: O(n)
    // Use hashmap to store the frequency of each element and return the element with frequency 1
    // Size of hasmap = max element in array (if we use set)

    // * Better use unordered map for larger inputs
class Solution{
public:	
	int search(int A[], int N){
	    unordered_map<int, int> map;
	    for(int i=0; i<N; i++) {
	        map[A[i]]++;
	    }
	    for(auto x:map) {
	        if(x.second == 1)
	            return x.first;
	    }
	    return -1;
	}
};


// ! Optimal Solution
    // Time Complexity: O(n)
    // Auxiliary Space Complexity: O(1)

    