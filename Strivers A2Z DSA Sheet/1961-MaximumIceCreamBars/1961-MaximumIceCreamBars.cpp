// Last updated: 8/7/2026, 7:07:28 PM
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxp = *max_element(costs.begin(), costs.end());

        vector<int> freq(maxp+1,0);

        for(auto it: costs){
            freq[it]++;
        }

        int ans = 0;

        for(int cost = 1; cost< maxp+1; cost++){
            if(freq[cost]==0) continue;

            int canBuy = min(freq[cost], coins/cost);

            ans+=canBuy;
            coins-=canBuy*cost;

            if(coins<cost) continue;
        }

        return ans;

    }
};