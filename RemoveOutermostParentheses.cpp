/*
    ! Problem
    https://leetcode.com/problems/remove-outermost-parentheses/description/
*/



//! Better Solution
    // * Time Complexity: O(n)
    // * Space Complexity: O(n)
    class Solution {
public:
    string removeOuterParentheses(string s) { 
         string res;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && count==0)
                count++;
            else if(s[i]=='(' && count>=1){
                res+=s[i];
                count++;
            }   
            else if(s[i]==')' && count>1){
                res+=s[i];
                count--;
            }
            else if(s[i]==')' && count==1)
                count--;
        }
        return res;
    }
};


//! Optimal Solution
    // * Time Complexity: O(n)
    // * Space Complexity: O(n)

class Solution {
public:
    string removeOuterParentheses(string s) { 
        string res;
        int start = 0;
        for (char c : s) {
            if (c == '(' && start++ > 0) res += c;
            if (c == ')' && start-- > 1) res += c;
        }
        return res;
    }
};