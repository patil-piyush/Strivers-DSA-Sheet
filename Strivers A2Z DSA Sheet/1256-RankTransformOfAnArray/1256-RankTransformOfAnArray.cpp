// Last updated: 8/7/2026, 7:09:21 PM
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (arr.empty()) return {};

        vector<int> ans = arr;
        sort(ans.begin(), ans.end());

        unordered_map<int, int> mp;

        mp[ans[0]] = 1;

        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] == ans[i - 1])
                mp[ans[i]] = mp[ans[i - 1]];
            else
                mp[ans[i]] = mp[ans[i - 1]] + 1;
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};