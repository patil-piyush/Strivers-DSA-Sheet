// Last updated: 8/7/2026, 7:15:46 PM
class Solution {
public:
    vector<vector<int>> result;

    void backtrack(int index, vector<int>& nums, vector<int>& ds) {
        result.push_back(ds);

        for (int i = index; i < nums.size(); i++) {

            // Skip duplicates
            if (i > index && nums[i] == nums[i - 1])
                continue;

            ds.push_back(nums[i]);
            backtrack(i + 1, nums, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ds;
        backtrack(0, nums, ds);
        return result;
    }
};
