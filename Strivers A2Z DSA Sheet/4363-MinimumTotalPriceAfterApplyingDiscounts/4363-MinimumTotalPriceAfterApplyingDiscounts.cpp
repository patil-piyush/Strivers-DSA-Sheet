// Last updated: 8/11/2026, 11:47:26 AM
class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());

        int n = min(prices.size(), discounts.size());
        double sum = 0.0;

        // Apply largest discounts to largest prices
        for (int i = 0; i < n; i++) {
            int price = prices[prices.size() - 1 - i];
            int discount = discounts[discounts.size() - 1 - i];

            sum += 1.0 * price * (100 - discount) / 100;
        }

        // Prices that didn't receive a discount
        for (int i = 0; i < (int)prices.size() - n; i++) {
            sum += prices[i];
        }

        return sum;
    }
};