/*
    https://leetcode.com/problems/valid-parentheses/
*/

class Solution {
public:
    bool isOpening(char ch) {
        return (ch=='(' || ch=='{' || ch=='[');
    }

    char correspondingOpening(char ch) {
        if(ch==')')
            return '(';
        else if(ch=='}')
            return '{';
        else
            return '[';
    }

    bool isValid(string str) {
        stack<char> st;
        for(int i=0; i<str.size(); i++) {
            char ch = str[i];
            if(isOpening(ch))
                st.push(ch);
            else {
                if(st.empty() || st.top() != correspondingOpening(ch))
                    return false;
                st.pop();
            }
        }

        return st.empty();
    }
};