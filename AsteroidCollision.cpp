/*
    !Problem
    https://leetcode.com/problems/asteroid-collision/
*/

// Time Complexity: O(n)
// Auxiliary Space Complexity: O(n)

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> stack;
    // we iterate for each asteroid
    for (int asteroid : asteroids) {
        // is asteriod is positive, it can't collide with any existing asteriod
        if (asteroid > 0) {
            stack.push(asteroid);
        } else {
            /*
While there are asteroids on the stack and the top of the stack is positive and its
absolute value is less than the absolute value of the current asteroid, we keep popping     asteroids from the stack.
            */
            while (!stack.empty() && stack.top() > 0 && abs(stack.top()) < abs(asteroid)) {
                stack.pop();
            }
    /*
If there are no asteroids left on the stack or the top of the stack is negative, we push the current asteroid onto the stack.
    */
            if (stack.empty() || stack.top() < 0) {
                stack.push(asteroid);
            }
            /*
If the top of the stack has the same absolute value as the current asteroid, we pop the top of the stack
            */
             else if (abs(stack.top()) == abs(asteroid)) {
                stack.pop();
            }
        }
    }

    vector<int> result(stack.size());
    for (int i = stack.size() - 1; i >= 0; i--) {
        result[i] = stack.top();
        stack.pop();
    }

    return result;     
    }
};