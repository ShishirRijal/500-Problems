/*
    ! Problem
    https://leetcode.com/problems/longest-common-prefix/description/
*/



//! Bruteforce
// * Time Complexity: O(n*m) // m is the size of first string
// * Space Complexity: O(1)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char ch;
        string result= "";
        int n = strs.size();
        for(int i=0; i<strs[0].size(); i++) {
            char ch=strs[0][i];
            cout<<ch<<" ";
            bool ismatched = true;
            for(int j=1; j<n; j++) {
                if(ch != strs[j][i]) 
                   { ismatched=false; break;}
            }
            if(ismatched)
                result+=ch;
            else break;

        }
        return result;
    }
};


// ! Better Solution
// * Time Complexity: O(n.logn)
// * Space Complexity: O(1)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string a = strs[0], b = strs[n-1];
        for(int i=0; i<a.size(); i++) {
            if(a[i] == b[i]) result+=a[i];
            else 
                return result;
        }
        return result;
    }
};
