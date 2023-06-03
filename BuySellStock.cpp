/*
    !Problem
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

*/


// ! Bruteforce Solution
    // Time Complexity: O(n^2)
    // Auxiliary Space Complexity: O(1)
    // ! Time Limit Exceeded
    class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit = 0;
       int n = prices.size();
       for(int i=0; i<n-1; i++) {
           for(int j=i+1; j<n; j++) {
               int temp = prices[j]-prices[i];
               if( temp > profit) {
                   profit = temp;
               }
           }
       }
       return profit;
    }   
};


// ! Optimal Solution
    // Time Complexity: O(n)
    // Auxiliary Space Complexity: O(n)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(); 
       int total[n];
       // let's find the largest price on each day, at which 
       // the stock can be found.. 
       // since stock is to be bought, before selling, we do from last to first
        total[n-1] = prices[n-1]; // last date price is same
        for(int i=n-2; i>=0 ;i--) { 
            total[i] = max(prices[i] , total[i+1]);
        } 
        // now let's see what's the total profit 
        // for this we subtract current day price from current day total,
        // which was calculated 
        int profit =0; 
        for(int i=0; i<n; i++) {
            profit = max(profit, total[i]-prices[i]);
        }
        return profit;
    }
};