// Last updated: 8/7/2026, 7:13:24 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>> pairs;
        for (int i = 0; i < nums.size(); i++)
        {
            pairs.push_back({nums[i], i});
        }
        sort(pairs.begin(), pairs.end());
        for (int i = 0; i < pairs.size()-1; i++)
        {
            if(pairs[i].first == pairs[i+1].first  && abs(pairs[i].second - pairs[i+1].second) <= k){
                return true;
            }
        }
        return false;
    }
};