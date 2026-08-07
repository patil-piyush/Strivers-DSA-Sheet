// Last updated: 8/7/2026, 7:16:00 PM
class Solution {
public:
    // vector<vector<int>> result;

    // void sub(int i, vector<int>& nums, vector<int>& current) {
    //     if (i == nums.size()) {
    //         result.push_back(current);
    //         return;
    //     }

    //     // include nums[i]
    //     current.push_back(nums[i]);
    //     sub(i + 1, nums, current);

    //     // exclude nums[i]
    //     current.pop_back();
    //     sub(i + 1, nums, current);
    // }

    // vector<vector<int>> subsets(vector<int>& nums) {
    //     vector<int> current;
    //     sub(0, nums, current);
    //     return result;
    // }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        int subset = 1<<n;

        for(int i=0; i<subset; i++){
            vector<int> list;
            for(int j=0; j<n; j++){
                if(i & ( 1 << j ))
                    list.push_back(nums[j]);
            }
            ans.push_back(list);
        }
        return ans;
    }
};