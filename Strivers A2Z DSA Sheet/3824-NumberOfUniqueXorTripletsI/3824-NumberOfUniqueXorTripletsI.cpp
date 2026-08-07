// Last updated: 8/7/2026, 7:05:24 PM
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        size_t n = nums.size();
        return 1 << (bit_width(n) - 3 / (n + 1));
    }
};