// Last updated: 8/7/2026, 7:17:21 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};