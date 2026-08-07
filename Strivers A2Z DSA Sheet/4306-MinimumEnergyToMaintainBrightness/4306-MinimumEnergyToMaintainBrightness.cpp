// Last updated: 8/7/2026, 7:04:24 PM
class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        long long totalTime = 0;
        long long start = intervals[0][0];
        long long end = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= end + 1) {
                if (intervals[i][1] > end) {
                    end = intervals[i][1];
                }
            } else {
                totalTime += end - start + 1;
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        
        totalTime += end - start + 1;
        long long bulbs = (brightness+2)/3;

        return bulbs*totalTime;
    }
};