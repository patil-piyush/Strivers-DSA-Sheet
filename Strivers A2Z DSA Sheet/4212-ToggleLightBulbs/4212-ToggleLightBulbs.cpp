// Last updated: 8/7/2026, 7:04:21 PM
class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> state(101, 0);
        vector<int> result;
        for(int i=0; i<bulbs.size(); i++){
            state[bulbs[i]] = !state[bulbs[i]];
        }

        for(int i=1; i<101; i++){
            if(state[i] == 1){
                result.push_back(i);
            }
        }
        
        sort(result.begin(), result.end());
        return result;
    }
};