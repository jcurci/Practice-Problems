/*
Problem:
Say you have an array prices for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).

*/
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        
        for(int i=1;i<prices.size();i++)
        {
            if (prices[i]>prices[i-1])
            {
                maxProfit += prices[i] - prices[i-1];
            }
        }
        return maxProfit;
        
    }
    
/*
Explanation:
We loop through the prices array and calculate the maximum profit by adding the profit you can get if the prices on one day is more expensive than the price on the previous day.


*/
