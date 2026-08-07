// Last updated: 8/7/2026, 7:06:11 PM
class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> freq;

        for (int x : nums)
            freq[x]++;

        int ans = 1;

        // Handle 1 separately
        if (freq.count(1)) {
            ans = (freq[1] % 2 == 0) ? freq[1] - 1 : freq[1];
        }

        for (auto &[num, cnt] : freq) {
            if (num == 1 || cnt < 2)
                continue;

            int len = 0;
            long long x = num;

            while (freq.count(x) && freq[x] >= 2) {
                len += 2;
                x = x * x;
            }

            if (freq.count(x) && freq[x] == 1)
                len += 1;
            else
                len -= 1;

            ans = max(ans, len);
        }

        return ans;
    }
};