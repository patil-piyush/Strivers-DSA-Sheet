// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

// brute force approach using two loops

// optimized approach using one loop
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int buyPrice = prices[0], profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < buyPrice)
                buyPrice = prices[i];
            profit = max(profit, prices[i] - buyPrice);
        }
        return profit;
    }
};