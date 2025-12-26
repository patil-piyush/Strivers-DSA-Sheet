#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

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