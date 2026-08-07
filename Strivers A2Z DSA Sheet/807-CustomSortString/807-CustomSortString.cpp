// Last updated: 8/7/2026, 7:10:47 PM
class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> o(26);
        int n = order.size();

        for (int i = 0; i < n; i++) {
            o[order[i] - 'a'] = i;
        }

        sort(s.begin(), s.end(), [&](auto& ch1, auto& ch2) {
            return o[ch1 - 'a'] < o[ch2 - 'a'];
        });

        return s;
    }
};