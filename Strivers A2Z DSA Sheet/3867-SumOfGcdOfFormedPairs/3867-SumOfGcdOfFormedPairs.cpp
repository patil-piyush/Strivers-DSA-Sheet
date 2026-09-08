// Last updated: 9/8/2026, 2:26:33 PM
class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGCD;
        int n = nums.size();
        int maxi = nums[0];
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            prefixGCD.push_back(gcd(maxi, nums[i]));
        }

        sort(prefixGCD.begin(), prefixGCD.end());
        long long sum = 0;
        for (int i = 0; i < prefixGCD.size() / 2; i++) {
            sum += gcd(prefixGCD[i], prefixGCD[prefixGCD.size() - i - 1]);
        }
        return sum;
    }
};