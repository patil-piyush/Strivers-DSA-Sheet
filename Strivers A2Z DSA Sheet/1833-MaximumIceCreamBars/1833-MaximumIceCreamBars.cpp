// Last updated: 9/8/2026, 2:32:24 PM
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