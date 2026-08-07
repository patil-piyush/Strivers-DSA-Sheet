// Last updated: 8/7/2026, 7:06:59 PM
class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());

        vector<pair<int, int>> best;
        int maxVal = 0;

        vector<vector<int>> byEnd = events;
        sort(byEnd.begin(), byEnd.end(),
             [](auto &a, auto &b) { return a[1] < b[1]; });

        int ans = 0;
        int j = 0;

        for (auto &e : events) {
            int start = e[0], end = e[1], value = e[2];

            while (j < byEnd.size() && byEnd[j][1] < start) {
                maxVal = max(maxVal, byEnd[j][2]);
                j++;
            }

            ans = max(ans, value + maxVal);

            ans = max(ans, value);
        }

        return ans;
    }
};
