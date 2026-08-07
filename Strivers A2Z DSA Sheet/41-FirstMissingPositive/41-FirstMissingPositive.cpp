// Last updated: 8/7/2026, 7:16:52 PM
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i=0;
        for(i; i<nums.size(); i++){
            if(nums[i] >= 0){
                break;
            }
        }

        int target =1;
        for(i; i<nums.size(); i++){
            if(nums[i] == target){
                target++;
            }
            else if(nums[i]>target){
                return target;
            }
        }
        return target;
    }
};