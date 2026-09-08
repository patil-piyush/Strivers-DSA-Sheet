// Last updated: 9/8/2026, 2:28:18 PM
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        size_t n = nums.size();
        return 1 << (bit_width(n) - 3 / (n + 1));
    }
};