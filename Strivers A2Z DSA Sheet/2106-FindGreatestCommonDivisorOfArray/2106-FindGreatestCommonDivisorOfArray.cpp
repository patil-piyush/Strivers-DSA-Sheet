// Last updated: 8/7/2026, 7:07:06 PM
class Solution {
public:
    int gcd(int a, int b){
        return a==0 ? b : gcd(b%a, a);
    }
    int findGCD(vector<int>& nums) {
        int small = *min_element(nums.begin(), nums.end());
        int large = *max_element(nums.begin(), nums.end());
        return gcd(small, large);
    }
};